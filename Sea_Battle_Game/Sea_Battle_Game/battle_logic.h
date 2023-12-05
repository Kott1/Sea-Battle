#ifndef BATTLE_LOGIC_H
#define BATTLE_LOGIC_H
#include "ship.h"

class Player {
private:
    Ship shipsRemain[10];
    bool wonGame;
    bool isYourTurn;

public:
    Player();
    void setShipsRemain(Ship shipsArray[10]);
    void setWonGame(bool isWinner);
    void setTurn(bool yourTurn);

    void getShipsRemain(Ship shipsArray[10]);
    bool getWonGame();
    bool getTurn();

    bool isWinner();
    void attack();
};

#endif BATTLE_LOGIC_H

