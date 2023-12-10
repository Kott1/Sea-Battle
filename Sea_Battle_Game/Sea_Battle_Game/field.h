#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include <iostream>

class GameField {
private:
    int fieldMarking[10][10] = [[0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
        [0, 1, 0, 2, 2, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 2, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 2, 0, 0],
        [0, 0, 0, 4, 4, 4, 4, 0, 0, 0],
        [0, 0, 3, 0, 0, 0, 0, 0, 0, 1],
        [0, 0, 3, 0, 0, 3, 3, 3, 0, 0],
        [0, 0, 3, 0, 2, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 2, 0, 0, 0, 0, 0],
        [1, 0, 0, 0, 0, 0, 0, 0, 1, 0]];
public:
    void clearField();
    bool isAllShipsSunk();
};

#endif FIELD_H