//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_BOW_HPP
#define RUNTRACK_CPP_BOW_HPP

#include "IWeapon.h++"

class Bow : public IWeapon {
private:
    int range = 4;
    int damage = 2;

public:
    void attack(Character &character) override;
};

#endif //RUNTRACK_CPP_BOW_HPP
