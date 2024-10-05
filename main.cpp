#include <iostream>
#include <ostream>

#include "src/GameEngine.h"
#include "src/character/Player.h"


using namespace std;

int main() {

    GameEngine game("Hauptmenü","m");

    // TODO: CharacterBuilder implementieren
    const Player player("Cloud",5000,120,10,1,10,1,1,1);

    player.attack(static_cast<BattleEntity>(player));

    game.addPlayer(player);

    for (int i = 0; i < game.getPlayers().size(); i++) {
        cout << game.getPlayer(i).getLabel() << " hat ein Level von " << player.getLevel() << endl;
    }

    return 0;
}
