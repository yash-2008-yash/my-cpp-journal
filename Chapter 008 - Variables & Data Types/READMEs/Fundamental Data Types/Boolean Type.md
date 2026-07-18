# Boolean type ➜ `bool`

It's size is 1 byte (8 bits).

This data type is simple as fuck. It only has two values, `true` and `false`.

```cpp
bool is_logged_in = true;
bool is_admin = false;
```

---

Even though bool only has two logical values, it's still stored as an integer internally:

Even though `bool` has two logical values, it's still stored as an integer internally.

- `false` is stored as 0
- `true` is stored as 1

```cpp
bool flag = true;

std::cout << flag;          // Prints 1, not "true"
std::cout << (int)flag;     // Prints 1
```

If you are a real stubborn asshole and you want the "true" and "false" literally, use this:

```cpp
std::cout << std::boolalpha << flag;  // Now, it prints "true"
```

---

There's one thing which is reallyyyyy important.

In C++, any non-zero number is true. And Zero values are falsy.

```cpp
bool a = 5;      // true (Any non-zero integer gets converted to "true")
bool b = -3;     // true (Even negative numbers!)
bool c = 0;      // false
bool d = 0.0f;   // false
```

This matters a whole in conditional statements. Because you might come across this type of code:

```cpp
while (1){ ... }
```
*"I know, we haven't learned conditional statements yet. Come back here after learning it, no probs."*

---

One more crazy thing:

```cpp
int score = true + true;
std::cout << score << std::endl;   // It'll print 2
```
You know **true** is 1. So, 1 + 1 = 2.  
Anything is possible in C++. So, don't be surprised.

---

Finally... never make this common mistake:

Never write `if (flag == true){ ... }` or `if (flag == 1){ ... }` in your code. It's redundant as fuck.

Just write `if (flag)` or `if (!flag)`.

---