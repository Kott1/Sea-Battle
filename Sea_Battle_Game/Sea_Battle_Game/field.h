#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include <iostream>

class GameField {
private:
    Ship ships[][];

    bool isValidPlacement(int x, int y);

public:
    void printField();
    void generateShips();
    bool checkPlacement();
};

#endif FIELD_H
