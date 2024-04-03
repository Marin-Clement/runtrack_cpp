//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_AQUATIC_H
#define RUNTRACK_CPP_AQUATIC_H


class Aquatic {
protected:
    double _swimSpeed;
public:
    Aquatic(double swimSpeed) : _swimSpeed(swimSpeed) {}

    virtual void swim() = 0;
};


#endif //RUNTRACK_CPP_AQUATIC_H
