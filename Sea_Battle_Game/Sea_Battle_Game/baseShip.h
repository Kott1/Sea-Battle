#ifndef BASESHIP_H
#define BASESHIP_H

#include <vector>
#include "math.h"

class BaseShip {
public:
	int id;
	int health;
	int ownerId;
	bool isHorizontal;
	const char* name;
};

#endif