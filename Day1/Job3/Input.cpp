//
// Created by Clément on 02/04/2024.
//

#include "Input.h"

#include <iostream>

int Input::getUserInput() {
    int list[5];
    for (int & i : list) {
        std::cout << "Enter an integer: ";
        std::cin >> i;
    }
    average(list);
    return 0;
}

void Input::average(const int *list) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += list[i];
    }
    std::cout << "The average of the 5 integers is " << sum / 5 << std::endl;
}

int main() {
    Input::getUserInput();
    return 0;
}