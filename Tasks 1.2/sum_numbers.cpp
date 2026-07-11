#include <iostream>

int main() {
    int num;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Sum numbers of number " << num << " = " << num % 10 + (num % 100) / 10 + (num % 1000) / 100 + num / 1000;

    return 0;
}