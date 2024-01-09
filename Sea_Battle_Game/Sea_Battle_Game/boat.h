#ifndef BOAT_H
#define BOAT_H

#include "baseShip.h"

class ShipBoat : public BaseShip {
public:
    ShipBoat() {
        health = 1;
        size = 1;
        name = "Boat";
    }
};

#endif