# Character Types

These are used to store characters *(string, if characters are combined)*.

<br>

### 1. `char`

**Size :** 1 byte (8 bits)  
**Range :** Depends on whether it's signed or unsigned, also this is platform/compiler-dependent. On most x86 systems (GCC/Clang/MSVC), `char` is signed by default: -128 to 127. But on ARM, it's often unsigned by default: 0 to 255.

**FUN FACT :** `char` is actually a small integer type under the hood. It stores a number, and that number gets interpreted as a character via the ASCII table.

```cpp
char grade = 'A';         // 'A' is stored internally as 65
std::cout << grade;       // Prints 'A'
std::cout << (int)grade;  // Prints 65
```

<br>

### 2. `signed char`

**Size :** 1 byte (8 bits)  
**Range :** -128 to 127

You can use this when you want a `char` that's guaranteed signed, usually for doing arithmetic with small numbers rather than storing text.

```cpp
signed char temp = -20;
```

<br>

### 3. `unsigned char`

**Size :** 1 byte (8 bits)  
**Range :** 0 to 255

It's very commonly used to represent raw bytes *(not text)*, like file I/O, image pixel data, network buffers. When you see `unsigned char` in some code, it's usually a strong signal that it's a raw binary data, not human text.

```cpp
unsigned char pixel_value = 200;
```

<br>

### 4. `wchar_t` ➜ Wide Character

**Purpose :** It's meant for characters outside basic ASCII, like non-English alphabets, symbols.  
**Size :** In **Windows**, it's 2 bytes, and in **Linux/MacOS**, it's 4 bytes.

```cpp
wchar_t letter = L'あ';   // Note the 'L' prefix!
```

Because its size isn't fixed across platforms, it's now considered a legacy choice, which is exactly why C++11 introduced the next two, fixed-size types.

<br>

### 5. `char16_t`

**Size :** 2 bytes  
**Purpose :** It represents UTF-16 code units, used for Unicode text processing where you specifically need UTF-16.

```cpp
char16_t character = u'A';    // Note the 'u' prefix!
```

<br>

### 6. `char32_t`

**Size :** 4 bytes  
**Purpose :** It represents UTF-32 code units, and you know the rest...

```cpp
char32_t character = U'A';    // Note the 'U' prefix!
```

<br>

### 7. `char8_t`

**Size :** 1 byte  
**Purpose :** It's specifically made for UTF-8 code units. Before C++20, we just used `char` for UTF-8 strings, which caused type-safety confusion like *"Is this `char` holding text or a raw byte or UTF-8? What the fuck is going on, bruh?"*. So... `char8_t` was added.

```cpp
char8_t character = u8'A';    // Note the 'u8' prefix!
```

---