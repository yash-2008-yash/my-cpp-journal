#include <iostream>

int main() {

  auto something{123ull};

  std::cout << something << std::endl;
  std::cout << "Size of the variable is " << sizeof(something) << " bytes." << std::endl;

  return 0;
}