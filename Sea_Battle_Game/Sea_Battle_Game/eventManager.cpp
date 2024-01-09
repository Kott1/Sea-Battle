#include "eventManager.h"

EventManager::EventManager()
{
    eventHandlersList.push_back(std::vector<void*>());
}

EventManager* EventManager::getSingleton()
{
    if (!inst) inst = new EventManager();
    return inst;
}

bool EventManager::registerEvent(int id, void* func)
{
    if (eventHandlersList.size() <= id)
    {
        eventHandlersList.push_back(std::vector<void*>());
        return registerEvent(id, func);
    }

    eventHandlersList[id].push_back(func);
    return true;
}

bool EventManager::removeEvent(int id, void* func)
{
    return true;
}

typedef void (*EventHandler)(void*);

bool EventManager::triggerEvent(int id, void* context)
{
    if (eventHandlersList.size() <= id) return false;

    std::vector<void*> func_list = eventHandlersList[id];
    EventHandler func;

    for (int index = 0; index < func_list.size(); index++)
    {
        func = (EventHandler)func_list[index];
        func(context);
    }

    return true;
}

EventManager* EventManager::inst = nullptr;