//
// Created by marin on 05/04/2024.
//

#include "EnemyFactory.h++"

EnemyFactory::EnemyFactory() {
    creators["Goblin"] = []() { return new Goblin(); };
    creators["Ogre"] = []() { return new Ogre(); };
    creators["Dragon"] = []() { return new Dragon(); };
}

Enemy* EnemyFactory::createEnemy(const std::string& type) {
    if (creators.find(type) != creators.end()) {
        return creators[type]();
    }
    return nullptr;
}

int main() {
    EnemyFactory factory;
    Enemy* enemy = factory.createEnemy("Goblin");
    if (enemy) {
        std::cout << enemy->attack() << std::endl;
        delete enemy;
    }
    return 0;
}