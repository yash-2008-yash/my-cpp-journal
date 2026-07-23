
# ➜ `std::setw()` from `<iomanip>` library

Imagine you are printing a table of data:
```cpp
std::cout << "Eddard" << " " << "Stark" << " " << "DEAD" << std::endl;
std::cout << "Robert" << " " << "Baratheon" << " " << "DEAD" << std::endl;
std::cout << "Jaime" << " " << "Lannister" << " " << "DEAD" << std::endl;
std::cout << "Daenerys" << " " << "Targaryen" << " " << "DEAD" << std::endl;
std::cout << "Jon" << " " << "Snow" << " " << "ALIVE" << std::endl;
std::cout << "Tyrion" << " " << "Lannister" << " " << "ALIVE" << std::endl;
std::cout << "Catelyn" << " " << "Tully" << " " << "DEAD" << std::endl;
```

The output will be look like:
```
Eddard Stark DEAD
Robert Baratheon DEAD
Jaime Lannister DEAD
Daenerys Targaryen DEAD
Jon Snow ALIVE
Tyrion Lannister ALIVE
Catelyn Tully DEAD
```
Looks ugly, right? No clear formatting, no proper indentations. **Let's fix this.**

<br>

Using `std::setw()`, we can set the width of the next single input/output field.
```cpp
std::cout << std::setw(10) << "Name" << std::setw(12) << "House" << std::setw(10) << "Status" << std::endl;
std::cout << std::setw(10) << "Eddard" << std::setw(12) << "Stark" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Robert" << std::setw(12) << "Baratheon" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Jaime" << std::setw(12) << "Lannister" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Daenerys" << std::setw(12) << "Targaryen" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Jon" << std::setw(12) << "Snow" << std::setw(10) << "ALIVE" << std::endl;
std::cout << std::setw(10) << "Tyrion" << std::setw(12) << "Lannister" << std::setw(10) << "ALIVE" << std::endl;
std::cout << std::setw(10) << "Catelyn" << std::setw(12) << "Tully" << std::setw(10) << "DEAD" << std::endl;
```

Now the output will look like:
```
    Name       House    Status
  Eddard       Stark      DEAD
  Robert   Baratheon      DEAD
   Jaime   Lannister      DEAD
Daenerys   Targaryen      DEAD
     Jon        Snow     ALIVE
  Tyrion   Lannister     ALIVE
 Catelyn       Tully      DEAD
```
A lot better than the previous messy output.

---

If you want the output to be attached to the left side, just use `std::left` like this:
```cpp
std::cout << std::left;

std::cout << std::setw(10) << "Name" << std::setw(12) << "House" << std::setw(10) << "Status" << std::endl;
std::cout << std::setw(10) << "Eddard" << std::setw(12) << "Stark" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Robert" << std::setw(12) << "Baratheon" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Jaime" << std::setw(12) << "Lannister" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Daenerys" << std::setw(12) << "Targaryen" << std::setw(10) << "DEAD" << std::endl;
std::cout << std::setw(10) << "Jon" << std::setw(12) << "Snow" << std::setw(10) << "ALIVE" << std::endl;
std::cout << std::setw(10) << "Tyrion" << std::setw(12) << "Lannister" << std::setw(10) << "ALIVE" << std::endl;
std::cout << std::setw(10) << "Catelyn" << std::setw(12) << "Tully" << std::setw(10) << "DEAD" << std::endl;
```
Then the output will go to the left:
```
Name      House       Status    
Eddard    Stark       DEAD      
Robert    Baratheon   DEAD      
Jaime     Lannister   DEAD      
Daenerys  Targaryen   DEAD      
Jon       Snow        ALIVE     
Tyrion    Lannister   ALIVE     
Catelyn   Tully       DEAD  
```

---