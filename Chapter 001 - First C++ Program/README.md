# Chapter 1 - First C++ Program

You know, when you start to learn a programming language, it's a tradition to write a program that prints *"Hello, World!"*. Don't ask me why. It's just a custom like how we say *"Hello."* during a phone call. It just comes out.

**C++ Program to print *"Hello, World!"* :**
```cpp
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;

  return 0;
}
```

Lemme break down what's actually this code means:

<br>

- `#include <iostream>` means that you are using a library called **iostream** in your program. You must include it because it gives us many important features. In the code, you can see that I used `std::cout` to print the *"Hello, World!"* statement. That `std::cout` is being provided by **iostream**. Without including it, you can't use `std::cout` in your program. You'll get errors. Try it out on your own.

<br>

- `int main() {...}` is the entry point of any C++ program. That means when the program is compiled, the **main() function** is the first thing to be executed. The `int` means that this main() function returns an **integer value**. You can see that it's returning 0 at the end with `return 0;`. You'll see more about functions in upcoming chapters. Now, you just have to know that whatever is inside the main() function gets executed.

<br>

- `std::endl` means it's the end of the line. You won't see the point of using it in this example. So, lemme give you a better one:

```cpp
#include <iostream>

int main() {
  std::cout << "Breaking Bad" << std::endl;
  std::cout << "Game of Thrones" << std::endl;
  std::cout << "The Walking Dead" << std::endl;

  return 0;
}
```
If you run this program, you'll see nothing special. It'll just print:
```
Breaking Bad
Game of Thrones
The Walking Dead
```

<br>

But... if you remove the `std::endl` from the program. Something like this:
```cpp
#include <iostream>

int main() {
  std::cout << "Breaking Bad";
  std::cout << "Game of Thrones";
  std::cout << "The Walking Dead";

  return 0;
}
```
The output will be different. It'll print:
```
Breaking BadGame of ThronesThe Walking Dead
```
All the 3 statements gets printed on the same line, which is ugly as fuck.

<br>

**Now you should have understood the point of using `std::endl`.**

---