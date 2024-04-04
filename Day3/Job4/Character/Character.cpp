#include "Character.h++"

void Character::draw() {
    std::cout << "Drawing a character at position (" << getX() << ", " << getY() << ")" << std::endl;
}

void Character::update() {
    // Code to update the character's state goes here
}

bool Character::isAlive() const {
    return healthPoints > 0;
}