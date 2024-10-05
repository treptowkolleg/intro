//
// Created by BenjaminWagner on 04.10.2024.
//

#include "GameEngine.h"

#include <utility>

#include "character/Character.h"

using namespace std;

// Implementierte Attribute und Methoden

GameEngine::GameEngine(const string& title, const string& key) {
}

vector<Character> GameEngine::getPlayers() {
    return this->players;
}

Character GameEngine::getPlayer(const int index) {
    return this->players[index];
}

void GameEngine::setPlayer(const int index, const Character& player) {
    this->players[index] = player;
}


auto GameEngine::addPlayer(const Character &player) -> GameEngine * {
    this->players.push_back(player);
    return this;
}

