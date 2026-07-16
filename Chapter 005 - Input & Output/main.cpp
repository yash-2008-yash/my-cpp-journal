#include <iostream>
#include <string>

int main() {

  std::string first_name;
  int age;

  std::cout << "Enter your first name and age: ";
  std::cin >> first_name >> age;

  std::cout << "Hi, " << first_name << "! So, you are " << age << " years old." << std::endl;

  return 0;
}