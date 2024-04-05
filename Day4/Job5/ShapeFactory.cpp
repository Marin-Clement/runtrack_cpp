//
// Created by marin on 05/04/2024.
//

#include "ShapeFactory.h++"

Shape *ShapeFactory::createShape(const std::string &shapeType) {
    if (shapeType == "circle") {
        return new Circle();
    } else if (shapeType == "rectangle") {
        return new Rectangle();
    } else {
        return nullptr;
    }
}

int main() {
    Shape *circle = ShapeFactory::createShape("circle");
    Shape *rectangle = ShapeFactory::createShape("rectangle");

    circle->draw();
    rectangle->draw();

    delete circle;
    delete rectangle;

    return 0;
}

