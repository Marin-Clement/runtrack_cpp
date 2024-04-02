//
// Created by Clément on 02/04/2024.
//

#include "EvenBits.h"

#include <iostream>

bool EvenBits::evenBits(unsigned int n) {
    int count = 0;
    while (n) {
        count ^= 1;
        n &= (n - 1);
    }
    return !(count & 1);
}

int main() {
    unsigned int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (EvenBits::evenBits(n)) {
        std::cout << "The number of bits is even" << std::endl;
    } else {
        std::cout << "The number of bits is odd" << std::endl;
    }

    return 0;
}

