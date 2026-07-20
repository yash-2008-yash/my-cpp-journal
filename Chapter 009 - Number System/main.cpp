#include <iostream>

int main() {

  int decimal_number = 69;
  int octal_number = 0105;
  int hexadecimal_number = 0x45;
  int binary_number = 0b1000101;

  std::cout << "Number: " << decimal_number << std::endl;
  std::cout << "Number: " << octal_number << std::endl;
  std::cout << "Number: " << hexadecimal_number << std::endl;
  std::cout << "Number: " << binary_number << std::endl;

  return 0;
}