#include "ship.h"

void Ship::takeDamage(int health) {
    //
}

int Ship::getHealth() {
    return health;
}

bool Ship::getIsAlive() {
    return isAlive ? true : false;
}

int Ship::getPosition() {
    //
}

void Ship::setIsAlive() {
    isAlive = false;
}
