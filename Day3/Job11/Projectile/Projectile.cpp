//
// Created by marin on 05/04/2024.
//

#include "Projectile.h++"

Projectile::Projectile(float x, float y, int damage) : GameObject(x, y), damage(damage) {}

void Projectile::draw() {
    std::cout << "p";
}

void Projectile::update() {
    GameObject::update();
}

