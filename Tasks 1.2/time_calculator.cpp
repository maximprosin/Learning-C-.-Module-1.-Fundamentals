#include <iostream>

int main() {
    int hours, minutes;

    std::cout << "Enter hours and minutes: ";
    std::cin >> hours >> minutes;

    std::cout << hours << " hours, " << minutes << " minutes, = " << hours * 60 + minutes << " minutes\n";
    
    std::cout << "Enter general minutes: ";
    std::cin >> minutes;

    std::cout << minutes << " minutes = " << minutes / 60 << " hours, " << minutes % 60 << " minutes";

    return 0;
}