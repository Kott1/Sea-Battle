#ifndef BOT_H
#define BOT_H

#include "field.h"
#include <vector>
#include <utility> // для std::pair

class AIPlayer {
private:
    GameBoard gameBoard;
    std::vector<std::pair<int, int>> shots; // Зберігає координати пострілів

    // Методи для AI стратегії
    void placeShips(); // Розміщення кораблів
    std::pair<int, int> generateShot(); // Генерація координат пострілу

public:
    AIPlayer(int width, int height);
    void makeMove(); // Виконання ходу
    bool checkGameRules(); // Перевірка правил гри
};

#endif // BOT_H

