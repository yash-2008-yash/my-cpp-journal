# ➜ `std::hex` and `std::oct` from `<ios>` library

These can be used to display numbers in different number systems.

```cpp
int number = 2365;

std::cout << "The number is " << number << std::endl;                       // 2365        
std::cout << "In Hexadecimal form: " << std::hex << number << std::endl;    // 93d
std::cout << "In Octal form: " << std::oct << number << std::endl;          // 4475
```

---