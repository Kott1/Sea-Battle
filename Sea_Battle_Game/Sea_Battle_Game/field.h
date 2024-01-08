#ifndef FIELD_H
#define FIELD_H

#include "ship.h"
#include <vector>
#include <iostream>
using namespace std;

class GameField {
private:
    int fieldMarking[10][10];

public:
    GameField();

    void clearField();
    bool isAllShipsSunk();
    void setShip(Ship ship);
    void printField();
};

#endif FIELD_H