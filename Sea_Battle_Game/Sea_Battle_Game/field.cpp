#include "field.h"
#include <random>

GameBoard::GameBoard(int width, int height) : width(width), height(height) {
    board.resize(height, std::vector<char>(width, '~')); // '~' означає воду
}

bool GameBoard::isValidPlacement(int x, int y) {
    // Реалізація перевірки коректності розміщення корабля
    // ...
    return true; // Тимчасово
}

void GameBoard::generateShips() {
    // Реалізація генерації кораблів на полі
    // ...
}

bool GameBoard::checkPlacement() {
    // Реалізація перевірки коректності розстановки
    // ...
    return true; // Тимчасово
}

void GameBoard::printBoard() {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}
