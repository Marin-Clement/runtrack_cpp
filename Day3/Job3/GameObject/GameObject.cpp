//
// Created by Clément on 04/04/2024.
//

#include "GameObject.h++"

GameObject::GameObject() : Vector2d() {}

GameObject::GameObject(float x, float y) : Vector2d(x, y) {}

GameObject::GameObject(const GameObject &gameObject) : Vector2d(gameObject.getX(), gameObject.getY()) {}

void GameObject::draw() {}

void GameObject::update() {}

