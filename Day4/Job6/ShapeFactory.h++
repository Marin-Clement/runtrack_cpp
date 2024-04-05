//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_SHAPEFACTORY_HPP
#define RUNTRACK_CPP_SHAPEFACTORY_HPP

#include "../Job4/Shape.h++"


template <class ShapeType>
class ShapeFactory {
public:
    static ShapeType* createShape() {
        return new ShapeType();
    }
};
#endif //RUNTRACK_CPP_SHAPEFACTORY_HPP
