//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_SHAPE_HPP
#define RUNTRACK_CPP_SHAPE_HPP

#include <iostream>

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

template <typename T>
void drawShape(const T& shape) {
    shape.draw();
}


#endif //RUNTRACK_CPP_SHAPE_HPP
