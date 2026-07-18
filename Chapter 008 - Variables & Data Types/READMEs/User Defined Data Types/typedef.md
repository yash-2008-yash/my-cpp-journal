# `typedef`

This doesn't create a new data type, it just gives a new name to an existing data type. Basically, it gives a nickname, and it's purely for readability.

### The problem it solves:

Some type names get long and annoying to write repeatedly:

```cpp
unsigned long long int big_number = 123456789012345;
```

Typing this long-ass names every time is tedious and cluttery.

That's why `typedef` exists.

```cpp
typedef unsigned long long int ULL;

ULL big_number = 123456789012345;
```
**ULL** is now just another name for `unsigned long long int`. The compiler treats them both same.

<br>

But... `typedef` is old as fuck now. It's the old C-style, but still valid in C++.  
After C++11, `using` is the alternate and correct way.

---

## `using`

This is the modern way. It does the exact same job, just cleaner syntax.

```cpp
using ULL = unsigned long long int;

ULL big_number = 123456789012345;
```

Notice the syntax?

The old way ➜ `typedef Type Alias`  
The modern way ➜ `using Alias = Type`

<br>

*Why the change when there's no change?*

The reasons `using` is preferred in modern C++ are:

- **Readable for complex types** : The `=` syntax is much clearer than `typedef` syntax, especially for function pointers *(a topic you don't need right now, just know that `using` handles it more cleanlt than `typedef` ever could).*
- **`using` works with templates, `typedef` doesn't** : *(even this is a topic you don't need yet).* Don't worry about fully understanding this **template** part yet. Just know it's a reason `using` is the modern default.

---