# Integer types

These are used to store numbers *(whole numbers, to be exact)*.

<br>

### 1. `short`

**Size :** 2 bytes (16 bits)  
**Range :** *-32,768* to *32,767*

This is rarely used today. Memory is cheap, but useful in embedded systems or huge arrays where you need to save space.

```cpp
short temperature = -15;
```

<br>

### 2. `int`

**Size :** 4 bytes (32 bits)  
**Range :** *-2,147,483,648* to *2,147,483,647*

This is the default choice for whole numbers.

```cpp
int age = 18;
```

<br>

### 3. `long`

**Size :** 4 bytes on Windows (even 64-bit), 8 bytes on Linux/Mac 64-bit  
**Range :** *-9,223,372,036,854,775,808* to *9,223,372,036,854,775,807*

When `int` isn't big enough, you can use `long`.

```cpp
long population = 8000000000;
```

<br>

### 4. `long long`

**Size :** 8 bytes (64 bits)  
**Range :** *-9,223,372,036,854,775,808* to *9,223,372,036,854,775,807*

The name can be a little sus, but is super useful for storing big numbers like factorials, timestamps in nanoseconds, large counters, etc. This is what you reach for when you specifically need a guaranteed 64-bit integer.

```cpp
long long distanceToMoon = 384400000;
```

<br>

---

### The `unsigned` versions of these bastards

Every type above has an "unsigned" version.  
`unsigned` means no negative numbers can be stored. But, you get more range in positive numbers. Basically, you sacrifice the negative range and get double the positive range instead.

| **Type** | **Signed range** | **Unsigned range** |
| :---: | :---: | :---: |
| `short` | *-32,768* to *32,767* | *0* to *65,535* |
| `int` | *-2.1B* to *2.1B* | *0* to *4.2B* |
| `long` | *-9.2Q* to *9.2Q* | *0* to *18.4Q* |
| `long long` | *-9.2Q* to *9.2Q* | *0* to *18.4Q* |

***NOTE :** `long` and `long long` have the same range, but the size differs between Windows and Linux/MacOS. In Windows, it's 4 bytes, and in Linux/MacOS, it's 8 bytes.

---