#include <iostream>

int main() {
    int year;

    std::cout << "Enter year: ";
    std::cin >> year;

    if (year % 400 == 0) {
        std::cout << "Leap year";
    } else if (year % 100 == 0) {
        std::cout << "Not a leap year";
    } else if (year % 4 == 0) {
        std::cout << "Leap year";
    } else {
        std::cout << "Not a leap year";
    }

    return 0;
}