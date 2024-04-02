//
// Created by Clément on 02/04/2024.
//

#include "PointersList.h"

#include <iostream>

void PointersList::findMin(const int *arr, int size) {
    int min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    std::cout << "The smallest number in the list is " << min << std::endl;
}

int main() {
    int list[5];
    for (int & i : list) {
        std::cout << "Enter an integer: ";
        std::cin >> i;
    }
    PointersList::findMin(list, 5);
    return 0;
}