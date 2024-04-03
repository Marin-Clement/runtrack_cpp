//
// Created by Clément on 03/04/2024.
//

#ifndef RUNTRACK_CPP_TERRESTRIAL_H
#define RUNTRACK_CPP_TERRESTRIAL_H


class Terrestrial {
protected:
    double _walkSpeed{};
public:
    virtual void walk() = 0;
};


#endif //RUNTRACK_CPP_TERRESTRIAL_H
