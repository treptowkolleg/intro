//
// Created by BenjaminWagner on 05.10.2024.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

#include "BattleEntity.h"
#include "Character.h"
#include "TalkEntity.h"


class Player final : public Character, public BattleEntity, TalkEntity
{
public:
    Player(const string &label, const int exp, const int hp, const int dp, const float dm,
        const int ap, const float am, const float vp, const float mp)
        : Character(label, exp, hp, dp, dm, ap, am, vp, mp) {}

    void attack(BattleEntity target) const;


};



#endif //PLAYER_H
