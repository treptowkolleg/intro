//
// Created by BenjaminWagner on 04.10.2024.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <string>
#include <vector>

#include "character/Character.h"


using namespace std;

// Interface
class GameEngine
{
    vector<Character> players;

public:
    GameEngine(const string& title, const string& key);
    [[nodiscard]] vector<Character> getPlayers();
    [[nodiscard]] Character getPlayer(int index);
    void setPlayer(int index, const Character& player);
    GameEngine *addPlayer(const Character &player);
};

#endif //GAMEENGINE_H
