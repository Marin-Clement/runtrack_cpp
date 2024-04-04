//
// Created by Clément on 04/04/2024.
//

#include "Player.h++"
#include "../Game/Game.h++"

Player::Player(const std::string &name, int health, int x, int y) {
    this->name = name;
    this->healthPoints = health;
    this->setX(x);
    this->setY(y);
    weapon = std::make_unique<Bow>();
}

void Player::update() {

}

void Player::draw() {
    Character::draw();
}

void Player::move(Vector2d vector) {
    setX(getX() + vector.getX());
    setY(getY() + vector.getY());
    std::cout << "Player moved to position (" << getX() << ", " << getY() << ")" << std::endl;
}

void Player::attack() {
    // get enemies
    std::vector<Enemy *> enemies = Game::getEnemies();

    // Check if an enemy is in range
    for (Enemy *enemy : enemies) {
        std::cout << "Checking if enemy is in range" << std::endl;
        std::cout << "Distance from nearest enemy: " << std::round(Vector2d(getX(), getY()).distance(Vector2d(enemy->getX(), enemy->getY()))) << std::endl;
        std::cout << "Weapon range: " << std::round(weapon->getRange()) << std::endl;
        if (std::round(Vector2d(getX(), getY()).distance(Vector2d(enemy->getX(), enemy->getY()))) <= std::round(weapon->getRange())) {
            std::cout << "Player attacks enemy" << std::endl;
            enemy->takeDamage(weapon->getDamage());
            return;
        } else {
            std::cout << "No enemy in range" << std::endl;
        }
    }
}

void Player::switchWeapon() {
    if (dynamic_cast<Bow *>(weapon.get())) {
        weapon = std::make_unique<Spear>();
        std::cout << "Switching to Spear" << std::endl;
        std::cout << "Spear range: " << std::round(weapon->getRange()) << std::endl;
        std::cout << "Spear damage: " << weapon->getDamage() << std::endl;
    } else if (dynamic_cast<Spear *>(weapon.get())) {
        weapon = std::make_unique<Sword>();
        std::cout << "Switching to Sword" << std::endl;
        std::cout << "Sword range: " << std::round(weapon->getRange()) << std::endl;
        std::cout << "Sword damage: " << weapon->getDamage() << std::endl;
    } else if (dynamic_cast<Sword *>(weapon.get())) {
        weapon = std::make_unique<Bow>();
        std::cout << "Switching to Bow" << std::endl;
        std::cout << "Bow range: " << std::round(weapon->getRange()) << std::endl;
        std::cout << "Bow damage: " << weapon->getDamage() << std::endl;
    }
}