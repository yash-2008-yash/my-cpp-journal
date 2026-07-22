#include <iostream>

int main() {

int number = 5;
int duplicate = ++number;

std::cout << number << std::endl;       // 6
std::cout << duplicate << std::endl;    // 5
  return 0;
}