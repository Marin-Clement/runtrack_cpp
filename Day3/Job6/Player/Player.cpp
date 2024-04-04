//
// Created by Clément on 04/04/2024.
//

#include "Player.h++"

Player::Player(const std::string &name, int health, int x, int y, std::unique_ptr<IWeapon> weapon) :
        Character(name, health, x, y), weapon(std::move(weapon)) {}

void Player::update() {
    weapon->attack(*this);

    switchWeapon();
}

void Player::switchWeapon() {
    if (dynamic_cast<Bow *>(weapon.get())) {
        weapon = std::make_unique<Spear>();
    } else if (dynamic_cast<Spear *>(weapon.get())) {
        weapon = std::make_unique<Sword>();
    } else if (dynamic_cast<Sword *>(weapon.get())) {
        weapon = std::make_unique<Bow>();
    }
}
