#include <iostream>

int main() {
    int num;

    std::cout << "Enter your number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Negative";
    } else if (num > 0)
    {
        std::cout << "Positive";
    } else {
        std::cout << "Zero";
    }
    

    return 0;
}