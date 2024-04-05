//
// Created by marin on 05/04/2024.
//

#include "Box.h++"
#include <iostream>

int main() {
    // Test the Box class
    Box<int> intBox(10);
    Box<float> floatBox(20.5f);
    Box<char> charBox('z');

    std::cout << "Int Box: " << intBox.getElement() << std::endl;
    std::cout << "Float Box: " << floatBox.getElement() << std::endl;
    std::cout << "Char Box: " << charBox.getElement() << std::endl;

    // Test the Box class with pointers
    int intElement = 10;
    Box<int*> intPointerBox(&intElement);
    std::cout << "Int Pointer Box: " << intPointerBox.getElement() << std::endl;

    return 0;
}