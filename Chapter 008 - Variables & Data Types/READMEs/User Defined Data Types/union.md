# `union`

`union` might look like `struct` at the first. But, nah! It's completely different under the hood. In `union`, all the members share the same memory location. Only one member can hold a valid value at a given time.

```cpp
union Data {
  int whole_number;
  float decimal_number;
  char character;
};
```

*So, what the fuck does this "all the members share the same memory location" actually mean?*

In `struct`, all its members gets its own separate space in memory.
```cpp
struct StructData {
  int whole_number;       // 4 bytes
  float decimal_number;   // 4 bytes
  char character;         // 1 byte
};

// Total size will be 9+ bytes because all members exist simultaneously
```

With `union`, it's a different story. Here, all members overlap in the same space. The size of `union` is only as big as its largest member.
```cpp
union UnionData {
  int whole_number;       // 4 bytes
  float decimal_number;   // 4 bytes
  char character;         // 1 byte
};

// Total size will be 4 bytes because size of the biggest member `int` or `float` is 4 bytes
```

<br>

When you use it, you'll see some difference.
```cpp
UnionData d;

d.whole_number = 65;
std::cout << d.whole_number;     // 65

d.decimal_number = 3.14f;        // this overwrites the same memory that `whole_number` was using
std::cout << d.decimal_number;   // 3.14

std::cout << d.whole_number;     // `whole_number` is garbage now as its old value got wiped out by `decimal_number`
```

<br>

*Why the fuck would anyone want this?*

Back then, RAM was not abundant, so to save memory, `union` was used.

If I'm being real, `union` is rarely used in modern C++ code, but you'll see them in low-level/embedded programming or some legacy code. So, you don't have to write `union` in your code, but you need to have a basic idea of what it is so you can recognize what it is when you come across it, or else you'll be like *"Eh? Eh? Ehhhhh?"*

---