//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_IWEAPON_HPP
#define RUNTRACK_CPP_IWEAPON_HPP

#include "../Character/Character.h++"

class IWeapon {
private:
    int range;
    int damage;
public:
    virtual void attack(Character &character, int damage) {
        character.takeDamage(damage);
    }

    virtual ~IWeapon() = default;

    virtual int getRange() const {
        return range;
    }

    virtual int getDamage() const {
        return damage;
    }
};

#endif //RUNTRACK_CPP_IWEAPON_HPP
