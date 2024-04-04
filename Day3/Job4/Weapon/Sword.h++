//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_SWORD_HPP
#define RUNTRACK_CPP_SWORD_HPP

#include "IWeapon.h++"

class Sword : public IWeapon {
private:
    int range = 1;
    int damage = 4;
public:
    void attack(Character &character) override;
};

#endif //RUNTRACK_CPP_SWORD_HPP
