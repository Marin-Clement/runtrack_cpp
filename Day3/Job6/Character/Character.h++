//
// Created by Clément on 04/04/2024.
//

#include <string>
#include "../GameObject/GameObject.h++"

#ifndef RUNTRACK_CPP_CHARACTER_HPP
#define RUNTRACK_CPP_CHARACTER_HPP

class Character : public GameObject {
private:
    std::string name;
    int healthPoints;

public:
    Character(const std::string &name, double x = 0.0, double y = 0.0, int healthPoints = 100)
            : GameObject(x, y), name(name), healthPoints(healthPoints) {}

    void draw() override;

    void update() override;

    void takeDamage(int damage);

    bool isAlive() const;
};


#endif //RUNTRACK_CPP_CHARACTER_HPP
