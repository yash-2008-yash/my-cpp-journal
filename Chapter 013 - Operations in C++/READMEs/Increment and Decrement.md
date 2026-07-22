# Increment / Decrement Operator in C++

*These operators increase / decrease the value by 1. That's it.*

There are 2 types in these operators: **Prefix** and **Postfix**

---

### PREFIX

<br>

1. `++x` ➜ **Prefix Increment Opearator**
```cpp
int number = 5;
int duplicate = ++number;

std::cout << number << std::endl;       // 6
std::cout << duplicate << std::endl;    // 6
```

In this, the value of `number` is incremented by 1 first. And then `duplicate` gets the updated value of `number`.

<br>

2. `--x` ➜ **Prefix Decrement Opearator**
```cpp
int number = 5;
int duplicate = --number;

std::cout << number << std::endl;       // 4
std::cout << duplicate << std::endl;    // 4
```
In this, the value of `number` is decremented by 1 first. And then `duplicate` gets the updated value of `number`.


---

### POSTFIX

<br>

1. `x++` ➜ **Postfix Increment Operator**
```cpp
int number = 5;
int duplicate = number++;

std::cout << number << std::endl;       // 6
std::cout << duplicate << std::endl;    // 5
```
In this, `duplicate` gets the value of `number`. And then the value of `number` gets incremented by 1.

<br>

2. `x--` ➜ **Postfix Decrement Operator**
```cpp
int number = 5;
int duplicate = number--;

std::cout << number << std::endl;       // 4
std::cout << duplicate << std::endl;    // 5
```
In this, `duplicate` gets the value of `number`. And then the value of `number` gets decremented by 1.

---

In both the cases, `number` gets updated. The increment and decrement happend either way. The only difference is what value does the `duplicate` get at the moment of assignment.

**TRICK TO REMEMBER:**  
- `++x` ➜ increment first, use afterwards
- `x++` ➜ use first, increment afterwards

If you want the old value even after updation, use **postfix**.  
If you don't give a fuck about the old value after updation, use **postfix**.

---