# Rules to name a variable in C++

<br>

- No special characters are allowed, except **underscore** `_`.

```cpp
int my$ = 1000;
```
These kinda names aren't allowed in C++. So, be cautious.

---

- Names can't start with a digit.

```cpp
char 1st_person = "Neil Armstrong";
```
You can keep numbers in your variable names, just not in the beginning itself.

---

- White-spaces are not allowed.

```cpp
char first MCU movie = "Iron Man";
```
You can't give space like this in a variable name. If you want sepration between words, just add an underscore, bro!
```cpp
char first_MCU_movie = "Iron Man";
```

---

- You can't name your variable after a C++ keyword.

```cpp
char return = "RDJ as Dr. Doom"
```
`return` is a keyword in C++. It has a specific meaning reserved for it. So, you can't name variables in that name. It'll confuse the compiler, causing errors.

---

- Don't start your variable name with an underscore `_`.

```cpp
int _score = 56;
```

It's legal in C++, but it's reserved for compiler/library use, so it's best avoiding it.

---

- Don't keep long-ass variable names without any fucking reason.

```cpp
char this_movie_is_my_favorite_movie_of_all_time_because_this_movie_has_a_special_place_in_my_heart = "Interstellar";
```
There's no length limit, but don't misuse that, asshole!

---

- Keep the variable names descriptive.

```cpp
int x = 5;
```
What the fuck is `x`? You might know it, but how others are gonna know what it is? **STOP USING SINGLE_LETTER VARIABLE NAMES!**
The name of your variable must explain what it is storing. You gotta be specific, bro! Or else people will see your code and run in the other direction.

<br>

```cpp
int total_vowels = 5;
```
See the difference? This is what I'm talking about.

---

- Constants must have ALL_CAPS by convention

```cpp
const TOTAL_SEATS = 50;
```

This is not a rule, just a good practice. It's best to follow this.

---