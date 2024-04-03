//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_TERRESTRIAL_HPP
#define RUNTRACK_CPP_TERRESTRIAL_HPP


class Terrestrial {
protected:
    double _walkSpeed;
public:
    explicit Terrestrial(double walkSpeed) : _walkSpeed(walkSpeed) {}

    virtual void walk() = 0;
};


#endif //RUNTRACK_CPP_TERRESTRIAL_HPP
