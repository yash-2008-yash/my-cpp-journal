# Logical Operators in C++

*These work on `bool` values to make logical decisions in the code.*

<br>

1. `&&` ➜ **Logical AND**

```cpp
std::cout << ((10 > 5) && (20 < 7)) << std::endl;   // 0
```
This works on the principle: *if all the expressions are true, it's 1. even if one expression is false, then it's 0.*

| **A** | **B** | **A AND B** |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

This is the logical table of **AND** (`&&`).

<br>

2. `||` ➜ **Logical OR**

```cpp
std::cout << ((10 > 5) || (20 < 7)) << std::endl;   // 1
```
This works on the principle: *if any one expression is true, then it's 1. if all the expressions are false, then it's 0.*

| **A** | **B** | A **OR** B |
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

This is the logical table of **OR** (`||`).

<br>

3. `!` ➜ **Logical NOT**

```cpp
std::cout << !(10 < 5) << std::endl;    // 1
```
This toggles the `bool` value. *If it's 1, it'll make it 0. If it's 0, it'll make it 1.*  
In the example, the expression is **false**, but the result is **true** because `!` toggled the value.

| **A** | **!A** |
| :---: | :---: |
| 0 | 1 |
| 1 | 0 |

This is the logical table of **NOT** (`!`).

---