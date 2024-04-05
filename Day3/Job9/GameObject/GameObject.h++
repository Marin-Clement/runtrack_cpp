//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_GAMEOBJECT_HPP
#define RUNTRACK_CPP_GAMEOBJECT_HPP

#include "../Vector2/Vector2D.h++"
#include <iostream>

class GameObject : public Vector2d {
public:
    GameObject();

    GameObject(float x, float y);

    GameObject(const GameObject &gameObject);

    virtual ~GameObject() = default;

    virtual void draw();

    virtual void update();

    bool collidesWith(const GameObject& other) const;
};


#endif //RUNTRACK_CPP_GAMEOBJECT_HPP
