//
// Created by BenjaminWagner on 04.10.2024.
//

#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <string>
#include <vector>

using namespace std;

// Interface
class GameEngine
{
    vector<string> players;

public:
    [[nodiscard]] vector<string> getPlayers();
    [[nodiscard]] string getPlayer(int index);
    void setPlayer(int index, string player);

    GameEngine *addPlayer(const string &player);
};

#endif //GAMEENGINE_H
