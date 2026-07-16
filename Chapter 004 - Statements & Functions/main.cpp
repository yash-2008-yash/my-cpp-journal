#include <iostream>

int AddTwoNumbers(int number_1, int number_2) {

  int result = number_1 + number_2;
  return result;
}

int main() {

  std::cout << "The sum is " << AddTwoNumbers(5, 10) << std::endl;

  return 0;
}