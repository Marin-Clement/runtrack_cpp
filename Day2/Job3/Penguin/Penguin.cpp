//
// Created by Clément on 03/04/2024.
//

#include "Penguin.hpp"

std::vector<std::weak_ptr<Penguin>> Penguin::allPenguins;

Penguin::Penguin(std::string name, double swimSpeed, double walkSpeed, double slideSpeed)
        : Aquatic(swimSpeed), Terrestrial(walkSpeed), _name(std::move(name)), _slideSpeed(slideSpeed) {}

Penguin::Penguin(const Penguin &other)
        : Aquatic(other._swimSpeed), Terrestrial(other._walkSpeed), _name(other._name),
          _slideSpeed(other._slideSpeed) {}

Penguin::~Penguin() {
    cleanUp();
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

void Penguin::setSwimSpeed(double speed) {
    _swimSpeed = speed;
}

void Penguin::setWalkSpeed(double speed) {
    _walkSpeed = speed;
}

void Penguin::setSlideSpeed(double speed) {
    _slideSpeed = speed;
}

void Penguin::cleanUp() {
    allPenguins.erase(std::remove_if(allPenguins.begin(), allPenguins.end(),
                                     [](const std::weak_ptr<Penguin> &penguin) { return penguin.expired(); }),
                      allPenguins.end());
}

int main() {
    std::shared_ptr<Penguin> penguin1 = std::make_shared<Penguin>("Penguin1", 2.0, 1.0, 3.0);
    std::shared_ptr<Penguin> penguin2 = std::make_shared<Penguin>("Penguin2", 3.0, 2.0, 4.0);
    penguin1->introduce();
    penguin1->swim();
    penguin1->walk();
    penguin2->introduce();
    penguin2->swim();
    penguin2->walk();
    return 0;
}