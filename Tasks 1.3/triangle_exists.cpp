#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter a, b, c triangle: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Triangle exists\n";

        if (a == b && b == c) {
            std::cout << "equilateral triangle";
        } else if (a == b || a == c || b == c) {
            std::cout << "isosceles triangle";
        } else {
            std::cout << "scalene triangle";
        }
    } else {
        std::cout << "Triangle does not exist";
    }

    return 0;
}