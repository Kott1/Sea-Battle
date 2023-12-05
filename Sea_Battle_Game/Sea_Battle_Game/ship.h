#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship {
private:
    bool isAlive;
    int health;
    int damage;
    int x_start, x_end;
    int y_start, y_end;

public:
    void takeDamage(int health);
    int getHealth();
    bool getIsAlive();
    int getPosition();
    void setIsAlive();
};

#endif SHIP_H

