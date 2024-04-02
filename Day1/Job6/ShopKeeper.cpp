//
// Created by Clément on 02/04/2024.
//

#include "ShopKeeper.h"

#include <iostream>

void ShopKeeper::getShopKeeperInput() {
    double price_per_kg, kg, vat_rate;
    std::cout << "Enter the price per kg: ";
    std::cin >> price_per_kg;
    std::cout << "Enter the number of kg: ";
    std::cin >> kg;
    std::cout << "Enter the VAT rate: ";
    std::cin >> vat_rate;
    calculatePrice(price_per_kg, kg, vat_rate);
}

double ShopKeeper::calculatePrice(double price_per_kg, double kg, double vat_rate) {
    double price = price_per_kg * kg;
    double vat = price * vat_rate / 100;
    double total_price = price + vat;
    std::cout << "The total price is " << total_price << std::endl;
    return total_price;
}

int main() {
    ShopKeeper::getShopKeeperInput();
    return 0;
}

