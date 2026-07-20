# Chapter 10 - Integers

I know that this concept has been covered in previous chapters.  
But... in this chapter, I'm gonna go in-detail about it. So, be ready!

---

In C++, we can initialize an integer *(or any type of variable)* in 3 ways:

<br>

<ins>1. **Assignment initialization**</ins>
```cpp
int number = 54;
```

This is the most commonly used one.

<br>

When you don't initialize a variable with a value, C++ will give it a garbage value, which has no meaning at all.
```cpp
int number;

std::cout << "Value: " << number << std::endl;    // Value: 32767
```
When you do initialize the variable with a value, that "garbage value" is overwritten by the value you give.

<br>

<ins>2. **Variable braced initialization**</ins>

```cpp
int number {45};
```
This means the variable `number` is initialized with the value 45.

<br>

```cpp
int number {};
```
When we don't give any value, `number` is automatically initialized with the value 0, instead of a garbage value.

<br>

<ins>3. **Functional variable initialization**</ins>

<br>

Same as **variable braced initialization**, just with different symbol.

```cpp
int number (45);    // Value = 45
```

```cpp
int number ();      // Value = 0
```

---

One more thing...

In C++, we can't use commas `,` to separate digits for readablity. I mean, you can't store number **1234567** as **12,34,567**. It'll give a compile time error.

But, you can use `'` to do this.

```cpp
int number = 12'34'567;

std::cout << "Value: " << number << std::endl;    // 1234567
```
This time, you won't get any errors.  

**NOTE:** This is just for readability purposes, so use it if you want, or don't. Your choice.

---