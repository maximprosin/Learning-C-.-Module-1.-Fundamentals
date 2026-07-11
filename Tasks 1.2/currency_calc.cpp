#include <iostream>

int main() {
    double eur_to_usd = 0.92;
    double usd_to_eur = 0.74;

    double usd, eur;

    // USD to EUR

    std::cout << "Enter USD to EUR: ";
    std::cin >> usd;

    std::cout << usd << " USD = " << usd * eur_to_usd << " EUR" << "\n"; 

    // Eur to USD

    std::cout << "Enter EUR to USD: ";
    std::cin >> eur;

    std::cout << eur << " EUR = " << eur * usd_to_eur << " USD";

    return 0;
}