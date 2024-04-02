//
// Created by Clément on 02/04/2024.
//

#include "ReverseNumber.h"

#include <iostream>

void ReverseNumber::getNumber() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    reverseNumber(a);
}

void ReverseNumber::reverseNumber(int a) {
    int reversed = 0;
    while (a != 0) {
        // Get the last digit of the number
        int digit = a % 10;
        // Add the digit to the reversed number
        reversed = reversed * 10 + digit;
        // Remove the last digit from the number
        a /= 10;
    }
    std::cout << "The reversed number is " << reversed << std::endl;
}

int main() {
    ReverseNumber::getNumber();
    return 0;
}
