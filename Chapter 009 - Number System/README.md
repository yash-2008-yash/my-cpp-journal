# Chapter 9 - Number System

If you didn't know this, there are 4 different number systems.  
This isn't only in C++, it's a fundamental concept in Computer Science.

A number can be expressed in 4 different ways: **Decimal, Octal, Hexadecimal, Binary**

For example, consider the number 69. It can be expressed in:
- **Decimal:** 69 *(the one we use in our daily life)*
- **Octal:** 105
- **Hexadecimal:** 45
- **Binary:** 1000101

*I'm not gonna say how the conversion happened because it's not a C++ concept. It's a general CS concept. So, learn it on your own.*

---

The point is, we can express numbers in these 4 ways in C++, too.
```cpp
int decimal_number = 69;
int octal_number = 0105;
int hexadecimal_number = 0x45;
int binary_number = 0b1000101;

std::cout << "Number: " << decimal_number << std::endl;       // Prints 69
std::cout << "Number: " << octal_number << std::endl;         // Prints 69
std::cout << "Number: " << hexadecimal_number << std::endl;   // Prints 69
std::cout << "Number: " << binary_number << std::endl;        // Prints 69
```

- To express a number in decimal form, just write it normally like we do in our daily life. No extra steps.
- To express a number in octal form, add a prefix `0`.
- To express a number in octal form, add a prefix `0x` or `0X`, doesn't matter.
- To express a number in octal form, add a prefix `0b` or `0B`, doesn't matter either.

---