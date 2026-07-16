#include <iostream>

int main() {
  std::cout << "Hello" << std::endl;

  int value = 3 / 0;
  std::cout << "The answer is " << value << std::endl;

  std::cout << "Goodbye" << std::endl;

  return 0;
}