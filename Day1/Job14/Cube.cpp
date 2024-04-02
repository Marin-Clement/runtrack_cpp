//
// Created by Clément on 02/04/2024.
//

#include "Cube.h"

#include <iostream>


int Cube::cube(int n) {
    if (n <= 5) {
        std::cerr << "Error: n must be greater than 5" << std::endl;
        return -1;
    }

    int sum = 0;
    for (int i = 5; i <= n; i++) {
        sum += i * i * i;
    }

    std::cout << "The sum of the cubes of the integers from 5 to " << n << " is " << sum << std::endl;
    return sum;
}

int main() {
    int n;
    std::cout << "Enter an integer greater than 5: ";
    std::cin >> n;

    Cube::cube(n);

    return 0;
}