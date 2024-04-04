//
// Created by Clément on 04/04/2024.
//

#ifndef RUNTRACK_CPP_VECTOR2D_HPP
#define RUNTRACK_CPP_VECTOR2D_HPP

#include <cmath>

class Vector2d {
private:
    double _x, _y;

public:
    Vector2d(double x, double y);

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);

    Vector2d operator+(const Vector2d& other) const;
    Vector2d operator-(const Vector2d& other) const;

    double distance(const Vector2d& other) const;
};

#endif //RUNTRACK_CPP_VECTOR2D_HPP