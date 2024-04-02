//
// Created by Clément on 02/04/2024.
//

#include "PointerOfListOfPointers.h"

#include <iostream>

void PointerOfListOfPointers::findMin(const int **arr, int size) {
    int min = **arr;
    for (int i = 0; i < size; i++) {
        if (**(arr + i) < min) {
            min = **(arr + i);
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
    const int *ptrList[5];
    for (int i = 0; i < 5; i++) {
        ptrList[i] = &list[i];
    }
    PointerOfListOfPointers::findMin(ptrList, 5);
    return 0;
}