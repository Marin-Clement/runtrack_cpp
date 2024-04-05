//
// Created by Clément on 04/04/2024.
//

#include <string>
#include <utility>
#include "../GameObject/GameObject.h++"

#ifndef RUNTRACK_CPP_CHARACTER_HPP
#define RUNTRACK_CPP_CHARACTER_HPP

class Character : public GameObject {
protected:
    std::string name;
    int healthPoints{};

public:

    explicit Character(std::string name, double x = 0.0, double y = 0.0, int healthPoints = 100);

    Character();

    void draw() override;

    void update() override;

    void takeDamage(int damage);

    [[nodiscard]] bool isAlive() const;

    void setName(std::string name);

    [[nodiscard]] std::string getName() const;
};


#endif //RUNTRACK_CPP_CHARACTER_HPP
