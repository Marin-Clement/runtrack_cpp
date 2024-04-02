//
// Created by Clément on 02/04/2024.
//

#include "SwitchInt.h"

#include <iostream>

void SwitchInt::getTwoInt() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    switchInt(a, b);
}

void SwitchInt::switchInt(int a, int b) {
    std::cout << "Before switching: " << a << " " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    display(a, b);
}

void SwitchInt::display(int a, int b) {
    std::cout << "After switching: " << a << " " << b << std::endl;
}

int main() {
    SwitchInt::getTwoInt();
    return 0;
}