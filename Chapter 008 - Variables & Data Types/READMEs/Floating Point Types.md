# Floating-point types

These are also used for storing numbers, but numbers with decimal points. Like 3.142, 5.67, etc.

<br>

### 1. `float`

**Size :** 4 bytes (32 bits)  
**Precision :** *~6-7* significant decimal digits  
**Range :** roughly ±3.4 × 10³⁸

```cpp
float price = 19.99f;
```

The `f` suffix matters. Without it, the literal 19.99 is a `double` by default, and assigning a `double` to a `float` silently truncates precision.

<br>

### 2. `double`

**Size :** 8 bytes (64 bits)  
**Precision :** ~*15-16* significant decimal digits  
**Range :** roughly ±1.7 × 10³⁰⁸

This is the default choice for floating-point numbers in C++.

```cpp
double pi = 3.14159265358979;
```

<br>

### 3. `long double`

**Size :** Slightly messy. It's platform-dependent. In **Linux**, it's typically 80-bit precision, stored in 12 or 16 bytes. In **Windows**, it's just 8 bytes, identical to `double`.  
**Precision :** ~*18-19* significant digits (on platforms where it's actually extended)
Size: this is the messiest one — genuinely platform-dependent:

```cpp
long double precise_value = 3.14159265358979323846L;   // Note the L suffic here!
```

<br>

---

#### The core problem: Floating point numbers aren't exact

This is the single most important thing to understand about `float` or `double`. They can't represent most decimal fractions exactly, because internally they store numbers as binary fractions *(powers of 2)*, and most of these "decimal fractions" like 0.1 have no exact binary representation.

```cpp
double a = 0.1;
double b = 0.2;

std::cout << (a + b == 0.3);    // It'll print 0, which means 'false'
std::cout << (a + b);           // But, this will print 0.3 WTF???
```
It returned **false**. That's because `a + b` is internally 0.30000000000000004. But, it prints 0.3 on screen due to rounding. That's why the comparison returned **false**.

---