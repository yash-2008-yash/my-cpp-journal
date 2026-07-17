# Chapter 7 - C++ Core Language Vs. Standard Library Vs. STL

### C++ Core Language

Core language is the actual grammar of C++. The rules that govern how you should declare a variable, how you define a function, the rules the compiler follow, everything itself is the core language. If you exclude `#include` statements from your code, the remaining code is just raw syntax rules.

---

### Standard Library

Standard library is a big fucking bundle of pre-written code that comes to your C++ via `#include`s. We use this so we don't have to build everything from scratch. This library covers I/O `<iostream>`, strings `<string>`, math `<cmath>`, threading`<thread>` and `<mutex>`, and many more...

---

### STL (Standard Template Library)

STL is actually a subset of Standard library.

It's basically a tool-box of ready-made data structures and algorithms so we don't have to write sorting, searching, stacks, queues, hashmaps, etc. from scratch every damn time.

This concept is crucial for DSA. We'll learn more about it.

But... I personally think using STL as a total beginner is not good. I mean, if you use shortcuts at first itself, you won't learn DSA properly. That's why, first learn fundamentals of DSA and then move to STL for saving time. It's a tool, not a shortcut.

---