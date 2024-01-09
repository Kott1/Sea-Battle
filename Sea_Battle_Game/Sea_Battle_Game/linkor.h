#ifndef LINKOR_H
#define LINKOR_H

#include "baseShip.h"

class ShipLinkor : public BaseShip {
public:
    ShipLinkor() {
        health = 4;
        size = 4;
        name = "Linkor";
    }
};

#endif