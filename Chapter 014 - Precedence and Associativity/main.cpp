#include <iostream>

int main() {

  int expression1 = 20 - 4 / 2 + 3 * 2;
  int expression2 = 5 == 5 && 10 % 3 > 1 || 0;

  std::cout << expression1 << std::endl;
  std::cout << expression2 << std::endl;

  return 0;
}