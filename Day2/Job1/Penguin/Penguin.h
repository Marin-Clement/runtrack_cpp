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
public:
    explicit Penguin(std::string  name);
    void swim() override;
    void walk() override;
    void introduce() const;
};


#endif //RUNTRACK_CPP_PENGUIN_H
