//
// Created by Clément on 04/04/2024.
//

#include "Decor.h++"

void Decor::draw() {
    std::cout << "Drawing a decor at position (" << getX() << ", " << getY() << ")" << std::endl;
}

void Decor::update() {
    // Decor does not move, so this method is empty
}
