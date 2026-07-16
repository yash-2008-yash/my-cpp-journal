# Chapter 4 - Statements & Functions

## Statements

A statement is a basic unit of computation in a C++ program. In simple terms, a statement is the simplest thing a C++ program can compile. It's the most basic unit. If you think about it, every C++ program is just a bunch of statements written together to achieve something. It's as simple as that.

**NOTE :** Every statement in C++ ***must*** end with a semicolon `;`.

<br>

## Functions

These are a block of code, which are just statements wrapped together, to perform a specific task. It's used to improve reusability in the code.

For example, if you wanna add 2 numbers:
```cpp
#include <iostream>

int main() {

  int first_number = 5;
  int second_number = 10;

  std::cout << "The sum is " << first_number + second_number << std::endl;

  return 0;
}
```
<br>

Instead of doing this, you can just wrap these statements inside a **function** and reuse whenever and how many times you want. It's much better.
```cpp
#include <iostream>

// This is a function, by the way
int AddTwoNumbers(int number_1, int number_2) {

  int result = number_1 + number_2;
  return result;
}

int main() {

  std::cout << "The sum is " << AddTwoNumbers(5, 10) << std::endl;

  return 0;
}
```

Before you can use a function, you gotta define it first. I mean, you can't use something which doesn't even exist.  
Defining a function in C++ is a fucking cake-walk.

```cpp
return_type function_name (parameter_1, parameter_2, ... parameter_n) {

  // Some code to perform a task

}
```
**This is the syntax.**
- `return_type` says what kinda value does your function return. If it returns an integer value, then it's `int`. If it returns nothing, then it's `void`. You'll learn this in-detail in upcoming chapters.
- `function_name` is completely left to you. You can name it whatever the fuck you want. It should follow the syntax, tho. Also, keep the name as clear as possible. The name should tell clearly what the function is doing.
- `parameters` are like inputs you give to the function. You can define n number of parameters. There's no rule that you should have only 3-4 parameters to a function.

---