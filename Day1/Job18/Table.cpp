//
// Created by Clément on 02/04/2024.
//

#include "Table.h"

#include <iostream>
#include <random>


int* Table::addElement(int* arr, int& size, int element) {
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    newArray[size] = element;
    delete[] arr;
    size++;
    return newArray;
}

void Table::showTable(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 0;
    int* arr = new int[size];

    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0,100);

    for (int i = 0; i < 5; i++) {
        arr = Table::addElement(arr, size, distribution(generator));
    }
    Table::showTable(arr, size);
    delete[] arr;
    return 0;
}