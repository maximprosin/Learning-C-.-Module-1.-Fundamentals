#include <iostream>
#include <string>

int main() {
    std::string name;

    int age;

    std::cout << "Enter your name and age: ";
    std::cin >> name >> age;

    std::cout << "Hello, " << name << "\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}