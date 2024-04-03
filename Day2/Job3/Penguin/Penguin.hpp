//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_PENGUIN_HPP
#define RUNTRACK_CPP_PENGUIN_HPP

#include "../Aquatic/Aquatic.hpp"
#include "../Terrestrial/Terrestrial.hpp"

#include <memory>
#include <vector>
#include <string>
#include <utility>
#include <iostream>
#include <algorithm>

class Penguin : public Aquatic, public Terrestrial {
private:
    std::string _name;
    double _slideSpeed;
    std::shared_ptr<Penguin> self;
    static void cleanUp();
public:
    static std::vector<std::weak_ptr<Penguin>> allPenguins;
    Penguin(std::string  name, double swimSpeed, double walkSpeed, double slideSpeed);
    Penguin(const Penguin& other); // Copy constructor
    ~Penguin();
    void swim() override;
    void walk() override;
    void introduce() const;
    void setSwimSpeed(double speed);
    void setWalkSpeed(double speed);
    void setSlideSpeed(double speed);
};


#endif //RUNTRACK_CPP_PENGUIN_HPP
