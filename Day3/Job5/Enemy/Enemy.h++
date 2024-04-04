//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_ENEMY_HPP
#define RUNTRACK_CPP_ENEMY_HPP

#include <memory>
#include "../Player/Player.h++"
#include "../Character/Character.h++"
#include "../Weapon/IWeapon.h++"
#include "../Weapon/Sword.h++"
#include "../Weapon/Bow.h++"
#include "../Weapon/Spear.h++"

class Enemy : public Character {
private:
    // player reference
    Player *player;
public:
    Enemy(const std::string &name, int health, int x, int y, Player &player);

    void update() override;

    void switchWeapon();

    void setPlayer(Player *player) {
        this->player = player;
    }

    void attackPlayer();

    void moveTowardsPlayer();
};


#endif //RUNTRACK_CPP_ENEMY_HPP
