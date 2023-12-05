#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include <iostream>

class GameBoard {
private:
    int width, height;
    std::vector<std::vector<char>> board;

    bool isValidPlacement(int x, int y);

public:
    GameBoard(int width, int height);
    void generateShips();
    bool checkPlacement();
    void printBoard();
};

#endif // FIELD_H
