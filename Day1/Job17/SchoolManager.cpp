//
// Created by Clément on 02/04/2024.
//

#include "SchoolManager.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

SchoolManager::SchoolManager() {
    std::srand(std::time(0));
    for (int & i : studentInSpeciality) {
        i = std::rand() % 55 + 12;
    }
}

void SchoolManager::showSpeciality(Speciality speciality) {
    std::cout << "Specialite: " << specialityName[speciality] << ", Places disponibles: " << studentInSpeciality[speciality] << std::endl;
}

int main() {
    SchoolManager schoolManager;
    for (int i = 0; i < COUNT; i++) {
        schoolManager.showSpeciality(static_cast<Speciality>(i));
    }
    return 0;
}