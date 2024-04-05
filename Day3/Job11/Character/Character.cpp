#include "Character.h++"

void Character::draw() {
    std::cout << "Drawing " << name << " at position (" << getX() << ", " << getY() << ")" << std::endl;
}

void Character::update() {
    // Code to update the character's state goes here
}

void Character::takeDamage(int damage) {
    healthPoints -= damage;
    if (isAlive()) {
        std::cout << name << " took " << damage << " damage. " << name << " has " << healthPoints
                  << " health points left." << std::endl;
    } else {
        std::cout << name << " took " << damage << " damage. " << name << " is dead." << std::endl;
    }
}

bool Character::isAlive() const {
    return healthPoints > 0;
}

Character::Character(std::string name, double x, double y, int healthPoints) : GameObject(x, y), name(std::move(name)),
                                                                               healthPoints(healthPoints) {}

void Character::setName(std::string name) {
    Character::name = std::move(name);
}

std::string Character::getName() const {
    return name;
}


Character::Character() = default;
