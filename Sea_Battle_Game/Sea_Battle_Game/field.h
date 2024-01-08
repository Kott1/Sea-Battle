#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include <iostream>

class GameField {
private:
    int fieldMarking[10][10];
public:
    void clearField();
    bool isAllShipsSunk();
    GameField();
};

#endif FIELD_H