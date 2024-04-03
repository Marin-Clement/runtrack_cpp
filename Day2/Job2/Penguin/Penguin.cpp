//
// Created by Clément on 03/04/2024.
//

#include "Penguin.h"

#include <utility>

Penguin::Penguin(std::string  name, double swimSpeed, double walkSpeed, double slideSpeed)
        : Aquatic(swimSpeed), Terrestrial(walkSpeed), _name(std::move(name)), _slideSpeed(slideSpeed) {}

Penguin::Penguin(const Penguin& other)
        : Aquatic(other._swimSpeed), Terrestrial(other._walkSpeed), _name(other._name), _slideSpeed(other._slideSpeed) {}


void Penguin::swim() {
    std::cout << "Penguin " << _name << " is swimming at speed: " << _swimSpeed << " m/s\n";
}

void Penguin::walk() {
    std::cout << "Penguin " << _name << " is walking at speed: " << _walkSpeed << " m/s\n";
}

void Penguin::introduce() const {
    std::cout << "Hello, my name is " << _name << ".\n";
}

void Penguin::setSwimSpeed(double speed) {
    _swimSpeed = speed;
}

void Penguin::setWalkSpeed(double speed) {
    _walkSpeed = speed;
}

void Penguin::setSlideSpeed(double speed) {
    _slideSpeed = speed;
}

int main() {
    Penguin penguin("Penguin", 2.0, 1.0, 3.0);
    penguin.introduce();
    penguin.swim();
    penguin.walk();
    return 0;
}