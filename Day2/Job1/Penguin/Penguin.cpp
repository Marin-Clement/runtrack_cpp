//
// Created by Clément on 03/04/2024.
//

#include "Penguin.h"

#include <utility>

Penguin::Penguin(std::string name) : _name(std::move(name)) {
    _swimSpeed = 100;
    _walkSpeed = 10;
}

void Penguin::swim() {
    std::cout << "Penguin " << _name << " is swimming at speed: " << _swimSpeed << " m/s\n";
}

void Penguin::walk() {
    std::cout << "Penguin " << _name << " is walking at speed: " << _walkSpeed << " m/s\n";
}

void Penguin::introduce() const {
    std::cout << "Hello, my name is " << _name << ".\n";
}

int main() {
    Penguin penguin("Penguin");
    penguin.introduce();
    penguin.swim();
    penguin.walk();
    return 0;
}