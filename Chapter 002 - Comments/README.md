# Chapter 2 - Comments

Comments are sentences which we leave in our code for humans to understand.  

For example:
```cpp
// This imports the iostream library in our program
#include <iostream>

int main() {
  std::cout << "Hello" << std::endl;

  return 0;
}
```
That 1st line is a comment. It explains what the code is doing. That's the purpose of using comments. You explain your code, so if someone sees your code, they'll understand what the code does.

The compiler ignores comment lines during the execution of the program, just like your crush ignores you. It's that simple. When the compiler sees a comment, it doesn't give a fuck about it and moves on to the next line.  
**MORAL OF THIS LESSON :** Don't be a comment line, or else you're gonna get ignored, lol.

---

### There are two types of comments in C++ :

1. **Single-line comment** : It's a one-line comment. It's created by using `//`.

```cpp
#include <iostream>

int main() {
  // This prints "Hello" to the console
  std::cout << "Hello" << std::endl;

  return 0;
}
```

2. **Multi-line comment** : It's a block of comment. It can be more than one line. It's created usig `/* */`. You can write your comment lines inside these.

```cpp
/*
This is a C++ program.
It prints "Hello" to the console.
Uhhhh... Idk what else to say :) BYE!
*/
#include <iostream>

int main() {
  std::cout << "Hello" << std::endl;

  return 0;
}
```
---

**NOTE:** Don't overuse comments in your code.

There's a saying *"Too much good is bad."* It applies here ,too.  
Only use comments where it's necessary. If you use too much comments in your code, it'll start to look like a novel instead of a program. So, don't do that.

I saw a motherfucker who put this comment in his code and it still cracks me up everytime I see it, lol.
```cpp
return 0;   // Returns 0
```
I mean, what the fuck, dude??

Please avoid these kind of comments and save yourself from getting cancelled.

---