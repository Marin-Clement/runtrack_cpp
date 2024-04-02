//
// Created by Clément on 02/04/2024.
//

#ifndef RUNTRACK_CPP_SCHOOLMANAGER_H
#define RUNTRACK_CPP_SCHOOLMANAGER_H

#include <string>

enum Speciality {
    IA,
    Web,
    ImmersiveSystem,
    CyberSecurity,
    COUNT
};

class SchoolManager {
private:
    int studentInSpeciality[COUNT]{};
    std::string specialityName[COUNT] = {"IA", "Web", "Immersive System", "Cyber Security"};

public:
    SchoolManager();
    void showSpeciality(Speciality speciality);
};


#endif //RUNTRACK_CPP_SCHOOLMANAGER_H
