//
// Created by Clément on 02/04/2024.
//

#include "EvenNotEven.h"

#include <iostream>

void EvenNotEven::evenOrNotEven(int a) {
    if (a % 2 == 0) {
        std::cout << a << " is even" << std::endl;
    } else {
        std::cout << a << " is not even" << std::endl;
    }
}

void EvenNotEven::display(int a) {
    evenOrNotEven(a);
}

int main() {
    EvenNotEven::display(5);
    EvenNotEven::display(6);
    return 0;
}