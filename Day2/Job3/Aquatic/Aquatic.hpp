//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_AQUATIC_HPP
#define RUNTRACK_CPP_AQUATIC_HPP


class Aquatic {
protected:
    double _swimSpeed;
public:
    explicit Aquatic(double swimSpeed) : _swimSpeed(swimSpeed) {}
    virtual void swim() = 0;
};


#endif //RUNTRACK_CPP_AQUATIC_HPP
