#ifndef CRUSISER_H
#define CRUSISER_H

#include "baseShip.h"

class ShipCruiser : public BaseShip {
public:
	ShipCruiser() {
		health = 3;
		name = "Cruiser";
	}
};

#endif