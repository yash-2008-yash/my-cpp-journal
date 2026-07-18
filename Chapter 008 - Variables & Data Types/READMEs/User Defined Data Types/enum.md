# `enum` ➜ Enumeration

An `enum` is a data type we create ourselves that can only hold one value out of a fixed list of named options you define.

### The problem it solves

Imagine you're created an app feature of tracking a task. Without `enum`, we use plain integers:

```cpp
int status = 0;   // 0 = Pending, 1 = In progress, 2 = Done
```
The point is nobody will know what it is unless they dig through some comments. Fuck others, even you could get confused sometimes if you see code like this:
```cpp
if (status == 1){
  std::cout << "The task is still in progress..." << std::endl;
}
```

But... with `enum`, you can create this:
```cpp
enum TaskStatus {
  PENDING,       // this becomes 0
  IN_PROGRESS,   // this becomes 1
  DONE           // this becomes 2
};
```
... and write code like this:

```cpp
#include <iostream>

enum TaskStatus { 
  PENDING, 
  IN_PROGRESS, 
  DONE 
};

int main() {

  TaskStatus task = PENDING;

  if (task == PENDING) {
    std::cout << "Your task is still pending. Shut the fuck up and wait for it!" << std::endl;
  } 
  else if (task==IN_PROGRESS) {
    std::cout << "Still in progress. Hold your horses, man!" << std::endl;
  } 
  else {
    std::cout << "Here! It's done. Take this and fuck off!" << std::endl;
  }

  return 0;
}
```

<br>

You can set custom starting points, too.
```cpp
enum TaskStatus { PENDING = 5, IN_PROGRESS, DONE };
```
It'll become PENDING = 5, IN_PROGRESS = 6, DONE = 7 *(each one auto-increments from the last)*

---

### The problems with plain `enum`

<br>

**➜ PROBLEM 1 :** Names leak into the surrounding scope, causing collisions.

```cpp
enum TaskStatus {
  PENDING,
  IN_PROGRESS,
  DONE
};

enum OrderStatus {
  PENDING,            // This is an error! PENDING is already used above!
  SHIPPED,
  DONE                // This is an error! DONE is already used too!
};
```

Both `enums` are trying to use **PENDING** and **DONE**. Even though "Task pending" and "Order pending" are logically two different things, C++ puts both into the same shared space, so the second one can't reuse those names at all.
**➜ PROBLEM 1 :** Names leak into the surrounding scope, causing collisions.

<br>

**➜ PROBLEM 2 :** Meaningless comparisons silently compile.

```cpp
enum TaskStatus { PENDING, IN_PROGRESS, DONE };
enum WeatherCondition { SUNNY, RAINY, CLOUDY };

TaskStatus task = PENDING;
WeatherCondition weather = SUNNY;

if (task == weather) {          // This shit compiles! No error! A silent bug
  std::cout << "It's equal!";
}
```

This doesn't make any sense at all. A task status has nothing to do with weather. But, since both are 0 under the hood, the compiler blindly compares them as `0 == 0` and says "true". It won't warn you that you're comparing two completely unrelated things. Bugs are hard to fix, yes, but silent bugs are a fucking pain in the ass.

<br>

**➜ PROBLEM 3 :** Auto-converts to `int` without asking, which can hide bugs.

```cpp
enum TaskStatus { PENDING, IN_PROGRESS, DONE };
TaskStatus task = PENDING;

int x = task;   // Silently allowed. x = 0, no cast needed, no warning, nothing
```

This means you can accidentally pass a **TaskStatus** where a plain number was expected, and the compiler won't stop you, even if that's not what you intented.

<br>

*These problems are exactly why `enum class` was introduced in C++11, which fixes all these problems. It was built for this shit!*

---

## `enum class`

It's the same as `enum`, but with one extra keyword `class`.

```cpp
enum class TaskStatus {
  PENDING,
  IN_PROGRESS,
  DONE
};
```

<br>

**➜ FIX 1 :** Names leak into the surrounding scope, causing collisions.

```cpp
enum class TaskStatus {
  PENDING,
  IN_PROGRESS,
  DONE
};

enum class OrderStatus {
  PENDING,
  SHIPPED,
  DONE
};

// Works just fine now!
```
It works fine because the names **PENDING** and **DONE** are no longer in the same global space. The're inside their own `enum`.

If you wanna access them, you must use **scope resolution operator** (`::`).

```cpp
TaskStatus task = TaskStatus::PENDING;
OrderStatus order = OrderStatus::PENDING;
```

<br>

**➜ FIX 2 :** No more meaningless comparisons.

```cpp
enum class TaskStatus { 
  PENDING, 
  IN_PROGRESS, 
  DONE 
};

enum class WeatherCondition { 
  SUNNY, 
  RAINY, 
  CLOUDY 
};

TaskStatus task = TaskStatus::PENDING;
WeatherCondition weather = WeatherCondition::SUNNY;

if (task == weather) {          // Now, an error will come! Compiler blocks this
  std::cout << "It's equal!";
}
```

`enum class` values are strongly typed. **TaskStatus** and **Weather** are treated as two different types by the compiler, not just "numbers in disguise". So, comparing them directly is now a compile-time error, not a silent `0 == 0` bug.

You can only compare a **TaskStatus** to another **TaskStatus**.

```cpp
TaskStatus task1 = TaskStatus::PENDING;
TaskStatus task2 = TaskStatus::DONE;

if (task1 == task2) { ... }     // No problems here because same type are on both sides
```

<br>

**➜ FIX 3 :** No more silent conversion to `int`.

```cpp
enum class TaskStatus { 
  PENDING, 
  IN_PROGRESS, 
  DONE 
};

TaskStatus task = TaskStatus::PENDING;

int x = task;   // Now, it's an ERROR! Compiler blocks this shit
```

In plain `enum`, this silently worked and gave x = 0. But, with `enum class`, the compiler refuses because it won't automatically treat **TaskStatus** as an `int` anymore.

---