//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_DECOR_HPP
#define RUNTRACK_CPP_DECOR_HPP


#include "../GameObject/GameObject.h++"

class Decor : public GameObject {
public:
    Decor(double x = 0.0, double y = 0.0) : GameObject(x, y) {}

    void draw() override;

    void update() override;
};


#endif //RUNTRACK_CPP_DECOR_HPP
