//
// Created by Clément on 04/04/2024.
//

#include "Enemy.h++"

Enemy::Enemy(const std::string &name, int health, int x, int y, Player &player) :
        Character(name, x, y, health), player(&player) {}

void Enemy::update() {
    moveTowardsPlayer();
}

void Enemy::moveTowardsPlayer() {
    if (player->getX() - getX() < 2 && player->getY() - getY() < 2) {
        attackPlayer();
    } else {
        if (player->getX() > getX()) {
            setX(getX() + 1);
        } else if (player->getX() < getX()) {
            setX(getX() - 1);
        }

        if (player->getY() > getY()) {
            setY(getY() + 1);
        } else if (player->getY() < getY()) {
            setY(getY() - 1);
        }
    }
}

void Enemy::attackPlayer() {
    player->takeDamage(10);
}

