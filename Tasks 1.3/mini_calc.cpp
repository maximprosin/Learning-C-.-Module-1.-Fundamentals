#include <iostream>

int main() {
    char op;
    int first_number, second_number;

    std::cout << "Enter your numbers: ";
    std::cin >> first_number >> second_number;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> op;

    if (op == '/' && second_number == 0) {
        std::cout << "Division by zero!";
    } else {
        if (op == '+') {
            std::cout << first_number << " + " << second_number << " = " << first_number + second_number;
        } else if (op == '-') {
            std::cout << first_number << " - " << second_number << " = " << first_number - second_number;
        } else if (op == '*') {
            std::cout << first_number << " * " << second_number << " = " << first_number * second_number;
        } else if (op == '/') {
            std::cout << first_number << " / " << second_number << " = " << first_number / second_number;
        } else {
            std::cout << "Unknown operation";
        }
    }

    return 0;
}