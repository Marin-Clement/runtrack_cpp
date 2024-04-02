//
// Created by Clément on 02/04/2024.
//

#include "LeapYear.h"

#include <iostream>

void LeapYear::getYear() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    checkLeapYear(year);
}

void LeapYear::checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }
}

int main() {
    LeapYear::getYear();
    return 0;
}