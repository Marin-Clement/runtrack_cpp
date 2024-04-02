//
// Created by Clément on 02/04/2024.
//

#include "SwapValuesReferences.h"

#include <iostream>

void SwapValuesReferences::getTwoInt() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    switchInt(a, b);
}

void SwapValuesReferences::switchInt(int &a, int &b) {
    std::cout << "Before switching: " << a << " " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "After switching: " << a << " " << b << std::endl;
}


int main() {
    SwapValuesReferences::getTwoInt();
    return 0;
}