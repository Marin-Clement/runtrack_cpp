//
// Created by Clément on 04/04/2024.
//

#include "Enemy.h++"
#include "../Game/Game.h++"

Enemy::Enemy(const std::string &name, int health, int x, int y, Player *player) : player(player) {
    this->name = name;
    this->healthPoints = health;
    this->setX(x);
    this->setY(y);
    this->player = player;
}

void Enemy::update() {
    moveTowardsPlayer();
}

void Enemy::draw() {
    std::cout << " E ";
}

void Enemy::moveTowardsPlayer() {
    int newX = getX();
    int newY = getY();

    if (player->getX() > getX()) {
        newX = getX() + 1;
    } else if (player->getX() < getX()) {
        newX = getX() - 1;
    }

    if (player->getY() > getY()) {
        newY = getY() + 1;
    } else if (player->getY() < getY()) {
        newY = getY() - 1;
    }

    if (Game::getGameObjectAt(newX, newY)) {
        std::cout << "Collision detected, movement cancelled." << std::endl;
        return;
    }

    setX(newX);
    setY(newY);
}

void Enemy::attackPlayer() {
    std::cout << name << " attacks " << player->getName() << std::endl;
    player->takeDamage(10);
}

