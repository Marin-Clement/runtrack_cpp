//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_ENEMY_H
#define RUNTRACK_CPP_ENEMY_H

#include <string>

class Enemy {
public:
    virtual ~Enemy() = default;
    virtual std::string attack() = 0;
};

class Goblin : public Enemy {
public:
    std::string attack() override;
};

class Ogre : public Enemy {
public:
    std::string attack() override;
};

class Dragon : public Enemy {
public:
    std::string attack() override;
};


#endif //RUNTRACK_CPP_ENEMY_H
