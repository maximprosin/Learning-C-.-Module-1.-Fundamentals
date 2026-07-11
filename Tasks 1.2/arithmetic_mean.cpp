#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter 3 numbers: ";
    std::cin >> a >> b >> c;

    std::cout << "Arithmetic mean = " << (static_cast<double>(a) + static_cast<double>(b) + static_cast<double>(c)) / 3;

    return 0;
}