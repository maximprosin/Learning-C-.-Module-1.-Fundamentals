#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Adult";
    } else {
        std::cout << "Minor";
    }

    return 0;
}