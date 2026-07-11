#include <iostream>

int main() {
    int number1, number2;

    std::cout << "Enter 2 numbers: ";
    std::cin >> number1 >> number2;

    std::cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n";
    std::cout << number1 << " % " << number2 << " = " << number1 % number2;

    return 0;
}