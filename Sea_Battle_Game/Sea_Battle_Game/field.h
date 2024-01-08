#include "linkor.h"
#include "cruiser.h"
#include "frigate.h"
#include "boat.h"
#include "math.h"
#include "battle_logic.h"

#ifndef FIELD_H
#define FIELD_H

class GameField
{
private:
    GameField();
    ~GameField() {};

    Player* Player1;
    Player* Player2;

    static GameField* instan;
public:

    Player* GetPlayer1() {
        return Player1;
    }

    Player* GetPlayer2() {
        return Player2;
    }

    static GameField* GetSingleton()
    {
        if (!instan) instan = new GameField();
        return instan;
    }
};

#endif