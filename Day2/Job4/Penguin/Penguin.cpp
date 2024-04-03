//
// Created by Clément on 03/04/2024.
//

#include "Penguin.hpp"

std::vector<std::weak_ptr<Penguin>> Penguin::allPenguins;

double Penguin::timeToCompleteTrack() const {
    double slideTime = 15.0 / _slideSpeed;
    double walkTime = (20 + 15.0) / _walkSpeed;
    double swimTime = 50 / _swimSpeed;
    return slideTime + walkTime + swimTime;
}

void Penguin::displayTrackTimes() {
    for (const auto &weakPenguin: allPenguins) {
        if (auto penguin = weakPenguin.lock()) {
            std::cout << penguin->_name << " completes the track in " << penguin->timeToCompleteTrack()
                      << " seconds.\n";
        }
    }
}

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
    auto penguin1 = std::make_shared<Penguin>("Penguin1", 2.0, 1.0, 0.5);
    auto penguin2 = std::make_shared<Penguin>("Penguin2", 1.5, 1.5, 0.75);
    auto penguin3 = std::make_shared<Penguin>("Penguin3", 2.5, 0.75, 0.25);

    Penguin::allPenguins.push_back(penguin1);
    Penguin::allPenguins.push_back(penguin2);
    Penguin::allPenguins.push_back(penguin3);

    penguin1->introduce();
    penguin1->swim();
    penguin1->walk();
    penguin1->setSwimSpeed(2.5);
    penguin1->setWalkSpeed(1.5);
    penguin1->setSlideSpeed(0.75);
    penguin1->introduce();
    penguin1->swim();
    penguin1->walk();

    penguin2->introduce();
    penguin2->swim();
    penguin2->walk();
    penguin2->setSwimSpeed(2.0);
    penguin2->setWalkSpeed(1.0);
    penguin2->setSlideSpeed(0.5);
    penguin2->introduce();
    penguin2->swim();
    penguin2->walk();

    penguin3->introduce();
    penguin3->swim();
    penguin3->walk();
    penguin3->setSwimSpeed(1.5);
    penguin3->setWalkSpeed(1.5);
    penguin3->setSlideSpeed(0.75);
    penguin3->introduce();
    penguin3->swim();
    penguin3->walk();

    Penguin::displayTrackTimes();
    return 0;
}