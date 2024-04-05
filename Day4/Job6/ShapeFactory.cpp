//
// Created by marin on 05/04/2024.
//

#include "ShapeFactory.h++"

int main() {
    Shape* circle = ShapeFactory<Circle>::createShape();
    Shape* rectangle = ShapeFactory<Rectangle>::createShape();

    circle->draw();
    rectangle->draw();

    delete circle;
    delete rectangle;
}

