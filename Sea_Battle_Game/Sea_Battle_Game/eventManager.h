#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "BaseShip.h"

class EventManager {
private:
	static EventManager* inst;

	EventManager();
	~EventManager() {};
public:
	static EventManager* getSingleton();
};

#endif