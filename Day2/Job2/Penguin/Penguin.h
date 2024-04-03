//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_PENGUIN_H
#define RUNTRACK_CPP_PENGUIN_H


#include <string>
#include <iostream>
#include "../Aquatic/Aquatic.h"
#include "../Terrestrial/Terrestrial.h"

class Penguin : public Aquatic, public Terrestrial {
private:
    std::string _name;
    double _slideSpeed;
public:
    Penguin(std::string name, double swimSpeed, double walkSpeed, double slideSpeed);

    Penguin(const Penguin &other); // Copy constructor
    void swim() override;

    void walk() override;

    void introduce() const;

    void setSwimSpeed(double speed);

    void setWalkSpeed(double speed);

    void setSlideSpeed(double speed);
};


#endif //RUNTRACK_CPP_PENGUIN_H
