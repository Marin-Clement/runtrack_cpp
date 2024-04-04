//
// Created by Clément on 04/04/2024.
//

#include "Player.h++"


void Player::update() {
    switchWeapon();
}

void Player::draw() {
    Character::draw();
}

void Player::switchWeapon() {
    if (dynamic_cast<Bow *>(weapon.get())) {
        std::cout << "Switching to Spear" << std::endl;
        weapon = std::make_unique<Spear>();
    } else if (dynamic_cast<Spear *>(weapon.get())) {
        std::cout << "Switching to Sword" << std::endl;
        weapon = std::make_unique<Sword>();
    } else if (dynamic_cast<Sword *>(weapon.get())) {
        std::cout << "Switching to Bow" << std::endl;
        weapon = std::make_unique<Bow>();
    }
}