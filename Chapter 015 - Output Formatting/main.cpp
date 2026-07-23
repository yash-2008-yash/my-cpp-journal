#include <iostream>
#include <iomanip>

int main() {
    std::cout << "┌────────────┬────────┐" << std::endl;
    std::cout << "│ " << std::left << std::setw(10) << "Name" << " │ " << std::setw(6) << "Score" << " │" << std::endl;
    std::cout << "├────────────┼────────┤" << std::endl;
    std::cout << "│ " << std::left << std::setw(10) << "Alex" << " │ " << std::setw(6) << 2450 << " │" << std::endl;
    std::cout << "│ " << std::left << std::setw(10) << "Sam" << " │ " << std::setw(6) << 1820 << " │" << std::endl;
    std::cout << "└────────────┴────────┘" << std::endl;

    return 0;
}