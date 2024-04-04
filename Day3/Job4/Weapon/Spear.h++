//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_SPEAR_HPP
#define RUNTRACK_CPP_SPEAR_HPP

#include "IWeapon.h++"

class Spear : public IWeapon {
private:
    int range = 2;
    int damage = 2;
public:
    void attack(Character &character) override;
};

#endif //RUNTRACK_CPP_SPEAR_HPP
