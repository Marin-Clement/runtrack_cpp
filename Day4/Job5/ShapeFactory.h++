//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_SHAPEFACTORY_HPP
#define RUNTRACK_CPP_SHAPEFACTORY_HPP

#include "../Job4/Shape.h++"


class ShapeFactory {
public:
    static Shape* createShape(const std::string& shapeType);
};
#endif //RUNTRACK_CPP_SHAPEFACTORY_HPP
