#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <vector>
#include "baseShip.h"

enum GameEvents : int {
    OnGameStart = 0,
    OnGameStop = 1,
    OnShipHit = 2,
    OnShipDestroy = 3,
    OnPlayerWin = 4
};

struct OnPlayerWinContext {
    int winerId;
};

struct OnShipHitContext
{
    int attackerId;
    BaseShip* hittedShip;
};

class EventManager {
private:
    EventManager();
    ~EventManager() {};

    std::vector<std::vector<void*>> eventHandlersList;
    static EventManager* inst;
public:
    static EventManager* getSingleton();

    bool registerEvent(int id, void* func);
    bool removeEvent(int id, void* func);
    bool triggerEvent(int id, void* Context);
};

#endif