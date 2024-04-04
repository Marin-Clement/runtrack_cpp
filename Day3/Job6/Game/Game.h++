//
// Created by Clément on 04/04/2024.
//

#include <vector>
#include <memory>
#include "../GameObject/GameObject.h++"

#ifndef RUNTRACK_CPP_GAME_HPP
#define RUNTRACK_CPP_GAME_HPP

class Game {
private:
    std::vector<std::unique_ptr<GameObject>> gameObjects;

public:
    void addGameObject(std::unique_ptr<GameObject> gameObject);
};


#endif //RUNTRACK_CPP_GAME_HPP
