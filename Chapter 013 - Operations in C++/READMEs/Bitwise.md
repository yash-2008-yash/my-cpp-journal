# Bitwise Operators in C++

*These operators perform logical operations on bit-level **(binary level)**.*

<br>

1. `&` ➜ **Bitwise AND**

```cpp
std::cout << (10 & 7) << std::endl;   // 2
```
*How the fuck did we get 2? 10 and 7 became 2? WHAAAAAAT?*

| **A** | **B** | **A AND B** |
| ----- | ----- | ----------- |
| 0     | 0     | 0           |
| 0     | 1     | 0           |
| 1     | 0     | 0           |
| 1     | 1     | 1           |

Under the hood, the numbers are converted to binary and **logical AND** is performed on every bit.

In the example:  
10's binary is **1010**  
7's binary is **0111**  
After performing **logical AND** on these 4 bits, you get **0010**, which is 2. That's what we got.

<br>

2. `|` ➜ **Bitwise OR**

```cpp
std::cout << (10 | 7) << std::endl;   // 15
```
You know how we get 15, right? **If not, fuck off from here and learn logical operations first!**

<br>

3. `~` ➜ **Bitwise NOT**

```cpp
std::cout << (~10) << std::endl;   // -11
```
**WHAT???** We should get **5**, right?  
10 in binary is **1010** and flipping the bits will give us **0101**, which is 5. How the fuck the answer is -11?

This is a common misconception. Even I fell for this shit, lol.

The thing is we flipped 4 bits. But, remember that `int` is 4 bytes in C++? It means 32 bits. So, 10 is not stored as **1010** in memory, it's stored as **00000000 00000000 00000000 00001010**.

Flipping the bits will make it **11111111 11111111 11111111 11110101**, which is a negative number because the leftmost bit is 1. If you 2's complement this flipped bits, you will get **-11**. That's why we got -11 as the answer.

<br>

4. `^` ➜ **Bitwise XOR**

```cpp
std::cout << (10 ^ 7) << std::endl;   // 13
```

In bit-level, it follows this principle: *if bits are different, it's 1, or if the bits are same, then it's 0.*

| **A** | **B** | **A XOR B** |
| ----- | ----- | ----------- |
| 0     | 0     | 0           |
| 0     | 1     | 1           |
| 1     | 0     | 1           |
| 1     | 1     | 0           |

This is the table for **XOR**.

<br>

5. `<<` ➜ **Bitwise left shift**

```cpp
std::cout << (178 << 3) << std::endl;   // 1424
```

In this example, the left shift operator `<<` shifts 3 bits to the left side and adds 3 zeroes to the right.

I mean, binary of 178 is **10110010**. After `<< 3`, it becomes **10110010000**, which is the binary of 1424. Hence, we get the answer 1424.

For negative numbers, it's the same. You'll get the answer in negative, that's it.
```cpp
std::cout << (-178 << 3) << std::endl;   // -1424
```

**TRICK TO REMEMBER:** (x << y) = x * 2^y

<br>

6. `>>` ➜ **Bitwise right shift**

```cpp
std::cout << (178 >> 3) << std::endl;   // 22
```

In this example, the right shift operator `>>` shifts 3 bits to the right, cancelling the existing last 3 bits, and adds 3 zeroes to the left.

Binary of 178 is **10110010**. After `>> 3`, it becomes **00010110**, which is the binary of 22. That's why the answer is 22.

**TRICK TO REMEMBER:** (x >> y) = x / 2^y *(discard any decimal parts, if any)*

For negative numbers, it's a lil' different.  
```cpp
std::cout << (-178 >> 3) << std::endl;   // -23
```
The binary of -178 is **01001110**, which is 2's complement of binary of 178. After `>> 3`, it becomes **11101001** *(1s should be added in the left instead of 0s'coz it's negative)*. Now, the leftmost is 1, so the number is negative. If we find 2's complement of it, we get **-23**, which is the answer.

**TRICK TO REMEMBER:** (-x >> y) = x / 2^y *(round down any decimal parts, if any)*

---