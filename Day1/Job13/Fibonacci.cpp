//
// Created by Clément on 02/04/2024.
//

#include "Fibonacci.h"

#include <iostream>

int main() {
    std::cout << "Fibonacci<0>::value = " << Fibonacci<0>::value << std::endl;
    std::cout << "Fibonacci<1>::value = " << Fibonacci<1>::value << std::endl;
    std::cout << "Fibonacci<2>::value = " << Fibonacci<2>::value << std::endl;
    std::cout << "Fibonacci<3>::value = " << Fibonacci<3>::value << std::endl;
    std::cout << "Fibonacci<4>::value = " << Fibonacci<4>::value << std::endl;
    std::cout << "Fibonacci<5>::value = " << Fibonacci<5>::value << std::endl;
    std::cout << "Fibonacci<6>::value = " << Fibonacci<6>::value << std::endl;
    std::cout << "Fibonacci<7>::value = " << Fibonacci<7>::value << std::endl;
    std::cout << "Fibonacci<8>::value = " << Fibonacci<8>::value << std::endl;
    std::cout << "Fibonacci<9>::value = " << Fibonacci<9>::value << std::endl;
    std::cout << "Fibonacci<10>::value = " << Fibonacci<10>::value << std::endl;

    return 0;
}