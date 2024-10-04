#include <iostream>
#include <ostream>

#include "src/GameEngine.h"


using namespace std;

int main() {

    GameEngine game;

    game.addPlayer("Player 1")->addPlayer("Player 2")->addPlayer("Player 3");

    for (int i = 0; i < game.getPlayers().size(); i++) {
        cout << game.getPlayer(i) << endl;
    }

    return 0;
}
