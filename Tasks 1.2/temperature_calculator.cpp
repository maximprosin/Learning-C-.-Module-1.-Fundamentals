#include <iostream>

int main() {
    double c;

    std::cout << "Enter celsius: ";
    std::cin >> c;

    std::cout << c << "°C to Fahrenheit = " << c * 9.0 / 5.0 + 32.0 << "°F";

    return 0;
}