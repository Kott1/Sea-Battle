#ifndef BATTLE_LOGIC_H
#define BATTLE_LOGIC_H
#include "ship.h"
#include <vector>
using namespace std;

class Player {
private:
    bool wonGame;
    bool isYourTurn;

public:
    Player();

    void setWonGame(bool isWinner);
    void setTurn(bool yourTurn);

    Ship getShip(int i);
    bool getWonGame();
    bool getTurn();

    //bool isWinner(int field[10][10]);
};

#endif BATTLE_LOGIC_H