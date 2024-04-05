//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_PROJECTILE_HPP
#define RUNTRACK_CPP_PROJECTILE_HPP


#include "../GameObject/GameObject.h++"

class Projectile : public GameObject {
private:
    int damage;
public:
    Projectile(float x, float y, int damage);

    void draw() override;

    void update() override;

    void onCollision(GameObject& other);
};


#endif //RUNTRACK_CPP_PROJECTILE_HPP
