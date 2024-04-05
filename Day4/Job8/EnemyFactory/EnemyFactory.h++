//
// Created by marin on 05/04/2024.
//

#ifndef RUNTRACK_CPP_ENEMYFACTORY_H
#define RUNTRACK_CPP_ENEMYFACTORY_H

#include <map>
#include <string>
#include <functional>
#include <iostream>
#include "../Enemy/Enemy.h++"


class EnemyFactory {
public:
    EnemyFactory();
    Enemy* createEnemy(const std::string& type);

private:
    std::map<std::string, std::function<Enemy*()>> creators;
};


#endif //RUNTRACK_CPP_ENEMYFACTORY_H
