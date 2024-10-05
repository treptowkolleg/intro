//
// Created by BenjaminWagner on 05.10.2024.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <cmath>
#include <string>
#include <utility>

using namespace std;

class Character {

    string label;
    int exp;
    int hp;
    int hpMax;
    int dp;
    float dm;
    int ap;
    float am;
    float vp;
    float mp;

public:

    Character(
        string label,
        const int exp,
        const int hp,
        const int dp,
        const float dm,
        const int ap,
        const float am,
        const float vp,
        const float mp
        )
        : label(move(label)),
          exp(exp),
          hpMax(hp),
          dp(dp),
          dm(dm),
          ap(ap),
          am(am),
          vp(vp),
          mp(mp) {
        this->hp = getLeveledStat(hp);
    }

    [[nodiscard]] string getLabel() const {
        return label;
    }

    [[nodiscard]] int getLevel() const {
        return static_cast<int>(round(log(exp) + exp * pow(15, -3)));
    }

protected:
    [[nodiscard]] int getLeveledStat(int const value) const {
        return getLeveledStat(static_cast<float>(value));
    }
    [[nodiscard]] int getLeveledStat(float const value) const {
        return static_cast<int>(round(value * sqrt(getLevel() ? getLevel() : 1 )*2));
    }
};



#endif //CHARACTER_H
