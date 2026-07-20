# Chapter 11 - Fractional Numbers

This topic was covered in the previous chapters, yes.  
But, in this chapter, I'm gonna go deep.

---

In C++, we can use scientific notations in floating numbers.

<br>

```cpp
double number{1.92400023e8};

std::cout << "Number: " << number << std::endl;
```

This means **1.92400023 x 10^8**, which is equal to **192400023**.

<br>

```cpp
double number{1.92400023e-11};

std::cout << "Number: " << number << std::endl;
```

This means **1.92400023 x 10^-11**, which is equal to **0.0000000000192400023**.

---

You know that if you divide a number with zero, you get **infinity**.

```cpp
double number1 {1.23};
double number2 {};

std::cout << "Value: " << number1 / number2 << std::endl;   // Value: inf
```
You'll get `inf` in the output, which means **infinity**.

<br>

When you divide zero by zero, you get something different.  
It's called **NaN** in C++, which means "Not a Number" or "Naughty Number".

```cpp
double number1 {};
double number2 {};

std::cout << "Value: " << number1 / number2 << std::endl;   // Value: -nan
```
That `-nan` means that you got a **Naughty Number** / **Not a Number**.

---