# Void type

Every data type we learned so far (`int`, `float`, `char`, `bool`) exists to store a value. `void` is the odd one out.

It means "nothing" or "no value." I mean, the name itself says it.

That's it. That's the core idea. It's not really a "data type" in the sense of holding data, it's more like a way of saying "there's nothing here."

<br>

**Where you will see it often?**

When a function doesn't return anything, then the data type of that function is `void`.

```cpp
void sayHello() {
  std::cout << "Hello!";
}
```
This function ain't returning anything. That's why it is `void`.

<br>

`void` is used in more advanced concepts, like pointers, `memcpy`, `malloc`, etc. You'll see in the upcoming chapters, so chill.

---