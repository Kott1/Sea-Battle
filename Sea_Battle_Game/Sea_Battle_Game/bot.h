#ifndef BOT_H
#define BOT_H

#include "field.h"
#include <vector>
#include <utility> // ��� std::pair

class AIPlayer {
private:
    GameBoard gameBoard;
    std::vector<std::pair<int, int>> shots; // ������ ���������� �������

    // ������ ��� AI ������㳿
    void placeShips(); // ��������� �������
    std::pair<int, int> generateShot(); // ��������� ��������� �������

public:
    AIPlayer(int width, int height);
    void makeMove(); // ��������� ����
    bool checkGameRules(); // �������� ������ ���
};

#endif // BOT_H

