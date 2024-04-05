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

GameObject* Game::getGameObjectAt(int x, int y) {
    for (auto& gameObject: gameObjects) {
        if (gameObject->getX() == x && gameObject->getY() == y) {
            return gameObject.get();
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
    drawGridAroundPlayer();
}

/// Draw a grid of size 10x10 around the player
void Game::drawGridAroundPlayer() {
    Player *player = getPlayer();
    int playerX = player->getX();
    int playerY = player->getY();

    for (int y = playerY + 5; y >= playerY - 5; y--) {
        for (int x = playerX - 5; x <= playerX + 5; x++) {
            GameObject *gameObject = getGameObjectAt(x, y);
            if (gameObject) {
                gameObject->draw();
            } else {
                std::cout << " . ";
            }
        }
        std::cout << std::endl;
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

bool Game::handleUserInput() {
    std::string input;
    std::cout << "Enter your action (move, change, attack, quit): ";
    std::cin >> input;

    if (input == "move") {
        // choose between up, down, left, right
        std::string direction;
        std::cout << "Enter direction (up, down, left, right): ";
        std::cin >> direction;
        Vector2d vector;

        if (direction == "up") {
            vector = Vector2d(0, 1);
            getPlayer()->move(vector);
            return true;
        } else if (direction == "down") {
            vector = Vector2d(0, -1);
            getPlayer()->move(vector);
            return true;
        } else if (direction == "left") {
            vector = Vector2d(-1, 0);
            getPlayer()->move(vector);
            return true;
        } else if (direction == "right") {
            vector = Vector2d(1, 0);
            getPlayer()->move(vector);
            return true;
        } else {
            std::cout << "Invalid direction. Try again." << std::endl;
            return false;
        }

    } else if (input == "change") {
        getPlayer()->switchWeapon();
        return true;
    } else if (input == "attack") {
        getPlayer()->attack();
        return true;
    } else if (input == "quit") {
        std::cout << "Quitting game..." << std::endl;
        exit(0);
    } else {
        std::cout << "Invalid action. Try again." << std::endl;
        return false;
    }
}


int main() {
    // Initialisation du jeu
    std::cout << "Initialising game..." << std::endl;

    // Création du joueur
    std::unique_ptr<Player> player = std::make_unique<Player>("Player", 100, 0, 1);
    Game::addGameObject(std::move(player));

    // Création des décors


    // Création des ennemis
    std::unique_ptr<Enemy> enemy1 = std::make_unique<Enemy>("Enemy1", 10, 1, 0, Game::getPlayer());
    Game::addGameObject(std::move(enemy1));



    // Boucle de jeu
    while (true) {
        Game::draw();

        if (Game::handleUserInput()) {
            Game::update();
        }

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