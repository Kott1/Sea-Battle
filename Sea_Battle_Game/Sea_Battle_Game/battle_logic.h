#ifndef BATTLE_LOGIC_H
#define BATTLE_LOGIC_H

#include "Player.h"

class Game {
private:
    Player player1, player2;
    // Статистика, стан гри тощо

public:
    Game();
    void play();
    Player determineWinner() const;
    // Інші методи...
};

#endif // BATTLE_LOGIC_H

