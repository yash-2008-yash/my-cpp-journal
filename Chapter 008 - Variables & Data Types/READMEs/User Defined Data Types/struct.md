# `struct` ➜ Structure

A `struct` lets us group multiple related variables of different data types into a single custom data type.

For example, if you want to represent a student's data, normally it would look like this:
```cpp
std::string name = "Bhuvan";
int age = 19;
double gpa = 7.85;
```

But, if you use a `struct`, you can group these into one single data type:
```cpp
struct Student {
  std::string name;
  int age;
  double gpa;
};
```
**NOTE :** This defines a new data type called **Student**, not a variable. It's just a blueprint, which you can use to create multiple variables.

```cpp
Student stud1;      // This is creating a variable called `stud1` using the Student struct

stud1.name = "Bhuvan";
stud1.age = 19;
stud1.gpa = 7.85;
```
`.` is the member access operator which is used to reach inside the struct and get/set individual fields.  
You can create hundreds of students easily now.

<br>

You can initialize it directly during the declaration, too.
```cpp
Student s1 = {"Bhuvan", 19, 7.85};    // Order matters (name, age, gpa)
```

<br>

To access the values, use this method:
```cpp
std::cout << stud1.name << std::endl;   // Bhuvan
std::cout << stud1.age << std::endl;    // 19
std::cout << stud1.gpa << std::endl;    // 7.85
```

<br>

One crazy thing: `struct` can have functions too.
```cpp
struct Student {
  std::string name;
  int age;
  double gpa;

  void PrintInfo() {
      std::cout << name << " is " << age << " years old, GPA: " << gpa;
  }
};

Student stud1 = {"Bhuvan", 219, 7.85};
s1.printInfo();   // Bhuvan is 19 years old, GPA: 7.85
```

---