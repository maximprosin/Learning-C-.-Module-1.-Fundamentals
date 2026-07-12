#include <iostream>

int main() {
    int day_num;

    std::cout << "Enter day number: ";
    std::cin >> day_num;

    if (day_num == 1) {
        std::cout << "Monday";
    } else if (day_num == 2) {
        std::cout << "Tuesday";
    } else if (day_num == 3) {
        std::cout << "Wednesday";
    } else if (day_num == 4) {
        std::cout << "Thursday";
    } else if (day_num == 5) {
        std::cout << "Friday";
    } else if (day_num == 6) {
        std::cout << "Saturday";
    } else if (day_num == 7) {
        std::cout << "Sunday";
    } else {
        std::cout << "Invalid day";
    }
    

    return 0;
}