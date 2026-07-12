#include <iostream>

int main() {
    int num;

    std::cout << "Enter your number: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "Even";
    } else {
        std::cout << "Odd";
    }

    return 0;
}