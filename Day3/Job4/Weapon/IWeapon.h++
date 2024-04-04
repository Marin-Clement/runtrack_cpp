//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_IWEAPON_HPP
#define RUNTRACK_CPP_IWEAPON_HPP

#include "../Character/Character.h++"

class IWeapon {
public:
    virtual void attack(Character &character) = 0;
};

#endif //RUNTRACK_CPP_IWEAPON_HPP
