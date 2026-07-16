# Chapter 5 - Input & Output

### OUTPUT in C++

We've been seeing this **output** all this time. We didn't notice it, that's it.  
Remember we used `std::cout`? That's used for output.

It's used to print data to the console.
```cpp
#include <iostream>

int main() {

  std::cout << "Hello" << std::endl;

  return 0;
}
```
Notice the `<<`? That means the data `"Hello"` is going towards the console. I hope it makes sense.

<br>

There are more than just `std::cout`. We also have `std::cerr` and `std::clog`.

<ins><i>So, what's the difference between these 3?</i></ins>


Before seeing the difference, understand this first:
When a program has text to display on the screen, the program won't display it directly on the screen. First, the text is sent to **Buffer**.

<ins><i>What the fuck is this buffer?</i></ins>

A buffer is a temporary holding spot in memory. It's a small chunk of RAM where the program stores text before sending it to the screen.

<ins><i>Why wait? Why don't just send the text directly to the screen?</i></ins>

That's because this task of sending text to screen is a slow action.

Imagine this: You live far away from a shop. Every time you need one item, you drive there, buy it, drive back. It's very slow if you do this for every single item.

But, you can do this instead: Make a list of items, wait till you have many items, then drive once and buy everything together. Fewer trips, so faster overall.

Now, come back to C++.

If the program sent text immediately every time, the program becomes slow, especially if you print a lot of text. That's the reason buffering exists. It buffers text, waits till the buffer is full, then sends it to the screen.

**NOTE:** This buffer is both good and bad.

- Good: It makes the program faster because of fewer "send to screen" actions.
- Bad: If program crashes, text stuck in buffer is lost. You can't see it anymore.

So, for normal output, buffer is good. But for error messages you can't afford to lose, you skip the buffer.


`std::cerr` does exactly this. It skips the buffer thing and sends text directly to screen. It is slower than `std::cout`, obviously. This can be used for printing error messages.

`std::clog` is basically the same as `std::cout`. It's just semantically made for logging messages. In HTML, you can use `<nav>` tag for a Navbar. But, you can use normal `<div>` too. Both work the same, but using `<nav>` is semantically good. Same with `std::cout` and `std::clog`.

**NOTE:** `clog` and `cerr` both write to the same stream (stderr), just `clog` is buffered and `cerr` isn't. `cout` writes to a different stream (stdout). So `clog` behaves like `cout` (buffered) but technically belongs with `cerr`.

---

### INPUT in C++

We can take input from the user and use it in our program.

See this example where user gets to input their age:
```cpp
#include <iostream>

int main() {

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "So, you are " << age << " years old!" << std::endl;

  return 0;
}
```
Notice the `>>`? That means the data we get from the user is going towards the `age` variable. I hope it makes sense.


<br>

We can get strings, too.
```cpp
#include <iostream>
#include <string>

int main() {

  std::string name;

  std::cout << "Enter your name: ";
  std::cin >> name;

  std::cout << "Nice to meet you, " << name << "!" << std::endl;

  return 0;
}
```
Notice the new library `<string>`? That's used for including strings in our C++ program.

Here, you might come across a problem, basically a bug.  
If you enter your full name, only first name shows up, the remaining gets truncated. For example, if you inputted *Bruce Wayne*, only *Bruce* will be read. *Wayne* gets truncated.  
That's because after a white-space, `std::cin` doesn't read it.

To make it read our input even after a white-space, we can use `std::getline`.
```cpp
#include <iostream>
#include <string>

int main() {

  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  std::cout << "Nice to meet you, " << name << "!" << std::endl;

  return 0;
}
```
Now, it will read even after white-spaces.

<br>

One more thing! You can chain multiple `std::cin`s in one line. Basically, pull off an one-liner.

Instead of doing this:
```cpp
std::cout << "Enter your first name: ";
std::cin >> first_name;

std::cout << "Enter your age: ";
std::cin >> age;
```

You can chain those two inputs in one-line itself:
```cpp
std::cout << "Enter your first name and age: ";
std::cin >> first_name >> age;
```
This is called **chained input** (or) **cascading input**.

---