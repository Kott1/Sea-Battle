#ifndef FRIGATE_H
#define FRIGATE_H

#include "baseShip.h"

class ShipFrigate : public BaseShip {
public:
    ShipFrigate() {
        health = 2;
        size = 2;
        name = "Frigate";
    }
};

#endif