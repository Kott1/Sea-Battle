#include "EventManager.h"

EventManager::EventManager() {

}

EventManager* EventManager::getSingleton() {
	if (!inst) inst = new EventManager();
	return inst;
}

EventManager* EventManager::inst = nullptr;