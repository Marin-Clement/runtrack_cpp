//
// Created by Clément on 04/04/2024.
//

#include "Enemy.h++"

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

void Enemy::moveTowardsPlayer() {
    if (Vector2d(getX(), getY()).distance(Vector2d(player->getX(), player->getY())) < 2) {
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
    std::cout << name << " attacks " << player->getName() << std::endl;
    player->takeDamage(10);
}

