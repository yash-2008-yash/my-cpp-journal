# How to display colored text in the output?

Typically, when you do `std::cout` to print some text, the terminal just prints "normal text". Just plain, white text. No colors, whatsoever, right?

But, we can do it! We can make colored text to be printed in the terminal.

We use special character sequences that the terminal recognizes as commands. These special sequences are called **ANSI escape codes** *(aka ANSI escape sequences)*. These are not a C++ feature, it's a terminal feature, if I am being honest.

**FUN FACT :** You don't need any extra libraries. Just `<iostream>` is enough for the job.

So, let's get started with this **ANSI escape codes**:

---

Every **ANSI escape code** starts with the same exact thing:
```
\033[
```
- `\033` is a special character called **ESC (escape)**. It never shows up in the output, it just does the job. Basically, it's invisible.
- `[` tells the terminal that the a formatting instruction is starting from here.

After this, you write a text formatting instruction and close it with a `m`.

```
\033[38;2;R;G;Bm
```

- `\033[` is the starting point. You just saw it.
- `38` tells that you are setting text color.
- `2` specifies that you are using RGB mode to set the color.
- `R;G;B` are the values of R, G, and B you specify to create a color.
- `m` means this is the end of the sequence.

<br>

Lemme show you this with an example.

```cpp
std::cout << "\033[38;2;255;0;0m" << "This text is gonna be in red color." << "\033[0m" << std::endl;
```
In this, the **RGB value** is (255, 0, 0), which is the red color. When you print a text, it will be in red color in the terminal. It'll look like this:  

![Red Text Example](/assets/rgb-red-example.png)

*Cool, right?*  
*If you don't think this is cool, then you are the one who's not cool.*

<br>

**NOTE :** In the above example, you can see that we used `\033[0m` at the end. Using that is mandatory. That's because when you set a color, it stays forver until you stop it. To stop it, we use `\033[0m`. If you don't use it, the color will be leaked to the next statements too.

---