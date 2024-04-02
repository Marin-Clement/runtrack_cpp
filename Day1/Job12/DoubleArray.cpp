//
// Created by Clément on 02/04/2024.
//

#include "DoubleArray.h"

#include <iostream>

void DoubleArray::doubleArray(int array[], int size) {
    // Double each element of the array using pointer
    for (int i = 0; i < size; i++) {
        *(array + i) *= 2;
    }

    printArray(array, size);
}

void DoubleArray::printArray(int array[], int size) {
    // Print the array
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    DoubleArray::doubleArray(array, size);

    return 0;
}