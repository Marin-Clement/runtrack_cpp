//
// Created by Clément on 04/04/2024.
//

#include "Game.h++"

void Game::addGameObject(std::unique_ptr<GameObject> gameObject) {
    gameObjects.push_back(std::move(gameObject));
}