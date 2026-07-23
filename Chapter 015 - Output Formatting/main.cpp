#include <iostream>

int main() {

  std::cout << "\033[1m" << "I am a bold text" << "\033[0m" << std::endl;

  std::cout << "\033[2m" << "I am a dimmed text" << "\033[0m" << std::endl;

  std::cout << "\033[3m" << "I am an italic text" << "\033[0m" << std::endl;

  std::cout << "\033[4m" << "I am underlined, ain't I?" << "\033[0m" << std::endl;

  std::cout << "\033[9m" << "I think I am striked out" << "\033[0m" << std::endl;

  return 0;
}