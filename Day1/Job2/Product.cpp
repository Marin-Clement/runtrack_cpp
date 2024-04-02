//
// Created by Clément on 02/04/2024.
//

#include "Product.h"

#include <iostream>

int Product::multiply(int a, int b) {
    return a * b;
}

void Product::display(int a, int b) {
    std::cout << "The product of " << a << " and " << b << " is " << multiply(a, b) << std::endl;
}

int main() {
    Product::display(5, 6);
    return 0;
}
