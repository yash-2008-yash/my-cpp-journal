# Chapter 12 - `auto` Keyword

This `auto` keyword can detect the data type of a variable.

It can be used when you don't want to mention long data type names for your variable.

```cpp
auto something{123ull};

std::cout << something << std::endl;    // 123
 
std::cout << sizeof(something) << std::endl;    // 8
```

The compiler automatically puts `unsigned long long` data type.

`sizeof()` returned 8. So, that means the `something` variable has the data type `unsigned long long`, not just `int`.

---

**NOTE :** 
- When you use `auto`, you must initialize variables during declaration itself, or else it won't compile.
- Once the type is deduced, you can't put a different type in that variable later.

---