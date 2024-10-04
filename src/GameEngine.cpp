//
// Created by BenjaminWagner on 04.10.2024.
//

#include "GameEngine.h"

#include <utility>

using namespace std;

// Implementierte Attribute und Methoden

vector<string> GameEngine::getPlayers() {
    return this->players;
}

string GameEngine::getPlayer(const int index) {
    return this->players[index];
}

void GameEngine::setPlayer(const int index, string player) {
    this->players[index] = move(player);
}


GameEngine *GameEngine::addPlayer(const string &player) {
    this->players.push_back(player);
    return this;
}

