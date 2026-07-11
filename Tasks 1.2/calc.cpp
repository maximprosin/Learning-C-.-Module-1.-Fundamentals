#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter your numbers: ";
    std::cin >> a >> b;

    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << static_cast<double>(a) / static_cast<double>(b);

    return 0;
}