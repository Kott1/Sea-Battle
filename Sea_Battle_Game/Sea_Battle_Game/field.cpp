#include "field.h"
#include <random>

GameBoard::GameBoard(int width, int height) : width(width), height(height) {
    board.resize(height, std::vector<char>(width, '~')); // '~' ������ ����
}

bool GameBoard::isValidPlacement(int x, int y) {
    // ��������� �������� ���������� ��������� �������
    // ...
    return true; // ���������
}

void GameBoard::generateShips() {
    // ��������� ��������� ������� �� ���
    // ...
}

bool GameBoard::checkPlacement() {
    // ��������� �������� ���������� �����������
    // ...
    return true; // ���������
}

void GameBoard::printBoard() {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}
