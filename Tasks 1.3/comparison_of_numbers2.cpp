#include <iostream>

int main() {
    int first_number, second_number;

    std::cout << "Enter first and second numbers: ";
    std::cin >> first_number >> second_number;

    if (first_number > second_number) {
        std::cout << "First is greater";
    } else if (second_number > first_number) {
        std::cout << "Second is greater";
    } else {
        std::cout << "They are equal";
    }

    return 0;
}