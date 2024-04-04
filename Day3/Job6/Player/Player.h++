//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_PLAYER_HPP
#define RUNTRACK_CPP_PLAYER_HPP

#include <memory>
#include "../Character/Character.h++"
#include "../Weapon/IWeapon.h++"
#include "../Weapon/Sword.h++"
#include "../Weapon/Bow.h++"
#include "../Weapon/Spear.h++"

class Player : public Character {
private:
    std::unique_ptr<IWeapon> weapon;
public:
    Player(const std::string &name, int health, int x, int y, std::unique_ptr<IWeapon> weapon);

    void update() override;

    void switchWeapon();
};

#endif //RUNTRACK_CPP_PLAYER_HPP
