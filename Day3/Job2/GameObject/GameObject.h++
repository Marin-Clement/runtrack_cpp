//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_GAMEOBJECT_H
#define RUNTRACK_CPP_GAMEOBJECT_H

#include "../Vector2/Vector2D.h++"

class GameObject : public Vector2d {
public:
    GameObject();

    GameObject(float x, float y);

    GameObject(const GameObject &gameObject);

    virtual void draw() = 0;

    virtual void update() = 0;
};


#endif //RUNTRACK_CPP_GAMEOBJECT_H
