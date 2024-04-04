//
// Created by Clément on 04/04/2024.
//

#include <vector>
#include <memory>
#include <iostream>
#include "../GameObject/GameObject.h++"
#include "../Decor/Decor.h++"
#include "../Player/Player.h++"
#include "../Enemy/Enemy.h++"


#ifndef RUNTRACK_CPP_GAME_HPP
#define RUNTRACK_CPP_GAME_HPP

class Game {
private:
    static std::vector<std::unique_ptr<GameObject>> gameObjects;

    static Player *player;

    static std::vector<Enemy *> enemies;

    static std::vector<Decor *> decors;

public:
    static void addGameObject(std::unique_ptr<GameObject> gameObject);

    static void update();

    static void draw();

    static Player *getPlayer();

    static std::vector<Enemy *> getEnemies();

    static std::vector<Decor *> getDecors();

    static void cleanUpGameObjects();

    static bool handleUserInput();


};


#endif //RUNTRACK_CPP_GAME_HPP
