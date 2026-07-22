# Chapter 14 - Precedence and Associativity

This concepts matters when there are multiple operators in one expression.

This one example is enough for you, in my opinion.
```cpp
int expression = 10 + 2 * 3 > 5 && 4 != 4;
```
This expression has 5 operators involved. Without an order, we'll get ambiguous answers.  
That's why an order should be there, and that order is **precedence**.

<br>

**Check out the official [C++ precedence and associativity table](./READMEs/Table.md).**

<br>

Using this table, let's solve the above expression.

There are 5 operators here: `+` `*` `>` `&&` `!=`

First we have to create an order or which comes first.  
By seeing the table, I can say that the correct precedence is `*` `+` `>` `!=` `&&`

So, the expresssion should be solved in this order itself.
```cpp
// Step 1
10 + 2 * 3 > 5 && 4 != 4

// Step 2
10 + 6 > 5 && 4 != 4

// Step 3
16 > 5 && 4 != 4

// Step 4
1 && 4 != 4

// Step 5
1 && 0

// Step 6
0
```
So, the correct answer is **0**.

If you get any other answers, it's fucking wrong. Because this is the correct precedence. C++ solves this expression and gives **0** as the answer, too. You don't have to solve this, you just have to know what's gonna happen under the hood.

---

In some cases, **precedence** alone can't help us. 

When there are multiple operators with same precedence, it becomes a problem.
For example:
```cpp
int expression = 20 - 5 - 3;
```
Here, both the operators are `-`, so they have the same precedence. So, which `-` should happen first? If you go from left to right *(20 - 5) - 3*, you'll get 12. And if you go from right to left *20 - (5 - 3)*, you'll get 18. See? We get ambiguous answers.

That's why **associativity** exits. It helps us when **precedence** alone doesn't stand a chance.

According to the **[C++ precedence and associativity table](./READMEs/Table.md)**, during subtraction, the associativity is **left to right**.

So, the expresssion should be solved in this direction itself.
```cpp
// Step 1
20 - 5 - 3

// Step 2
(20 - 5) - 3

// Step 3
15 - 3

// Step 4
12
```
The correct answer is **12**.

If you get any other answers, it's fucking wrong. Because this is the correct associativity. C++ solves this expression and gives **12** as the answer, too. You don't have to solve this, you just have to know what's gonna happen under the hood.

---