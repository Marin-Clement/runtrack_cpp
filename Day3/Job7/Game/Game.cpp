//
// Created by Clément on 04/04/2024.
//

#include "Game.h++"

std::vector<std::unique_ptr<GameObject>> Game::gameObjects;

void Game::addGameObject(std::unique_ptr<GameObject> gameObject) {
    gameObjects.push_back(std::move(gameObject));
}

Player *Game::getPlayer() {
    for (const auto &gameObject: gameObjects) {
        if (auto *pPlayer = dynamic_cast<Player *>(gameObject.get())) {
            return pPlayer;
        }
    }
    return nullptr;
}

void Game::update() {
    for (const auto &gameObject: gameObjects) {
        gameObject->update();
    }
}

void Game::draw() {
    for (const auto &gameObject: gameObjects) {
        gameObject->draw();
    }
}

std::vector<Enemy *> Game::getEnemies() {
    std::vector<Enemy *> vector;
    for (const auto &gameObject: gameObjects) {
        if (auto *pEnemy = dynamic_cast<Enemy *>(gameObject.get())) {
            vector.push_back(pEnemy);
        }
    }
    return vector;
}

std::vector<Decor *> Game::getDecors() {
    std::vector<Decor *> vector;
    for (const auto &gameObject: gameObjects) {
        if (auto *pDecor = dynamic_cast<Decor *>(gameObject.get())) {
            vector.push_back(pDecor);
        }
    }
    return vector;
}

void Game::cleanUpGameObjects() {
}

int main() {
    Game game;

    // Initialisation du jeu

    std::cout << "Initialising game..." << std::endl;

    // Création du joueur
    std::unique_ptr<Player> player = std::make_unique<Player>("Player", 0, 0, 100);
    Game::addGameObject(std::move(player));

    // Création des décors


    // Création des ennemis
    std::unique_ptr<Enemy> enemy1 = std::make_unique<Enemy>("Enemy1", 0, 10, 10, Game::getPlayer());
    Game::addGameObject(std::move(enemy1));



    // Boucle de jeu
    while (true) {
        Game::update();
        Game::draw();

        // Nettoyer les GameObjects qui ne sont plus nécessaires
        Game::cleanUpGameObjects();

        // Si le joueur n'est plus en vie, arrêter la boucle de jeu
        if (!Game::getPlayer()->isAlive()) {
            std::cout << "Game over!" << std::endl;
            break;
        }


        // Si tous les ennemis sont morts, arrêter la boucle de jeu
        if (Game::getEnemies().empty()) {
            std::cout << "You win!" << std::endl;
            break;
        }
    }

    return 0;
}