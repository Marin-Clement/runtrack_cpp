//
// Created by Clément on 04/04/2024.
//

#include "Vector2d.h++"

Vector2d::Vector2d(double x, double y) : _x(x), _y(y) {}

double Vector2d::getX() const { return _x; }
double Vector2d::getY() const { return _y; }

void Vector2d::setX(double x) { this->_x = x; }
void Vector2d::setY(double y) { this->_y = y; }

Vector2d Vector2d::operator+(const Vector2d& other) const {
    return Vector2d(_x + other._x, _y + other._y);
}

Vector2d Vector2d::operator-(const Vector2d& other) const {
    return Vector2d(_x - other._x, _y - other._y);
}

double Vector2d::distance(const Vector2d& other) const {
    double dx = _x - other._x;
    double dy = _y - other._y;
    return std::sqrt(dx * dx + dy * dy);
}