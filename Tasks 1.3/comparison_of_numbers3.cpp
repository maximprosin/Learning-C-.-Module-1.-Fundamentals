#include <iostream>

int main() {
    int first_number, second_number, third_number;

    std::cout << "Enter 3 numbers: ";
    std::cin >> first_number >> second_number >> third_number;

    if (first_number > second_number && first_number > third_number) {
        std::cout << first_number;
    } else if (second_number > first_number && second_number > third_number) {
        std::cout << second_number;
    } else {
        std::cout << third_number;
    }

    return 0;
}