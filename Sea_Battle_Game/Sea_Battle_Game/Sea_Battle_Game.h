#ifndef SEABATTLEGAME_H
#define SEABATTLEGAME_H

#include "field.h"
#include "EventManager.h"

class Game {
private:
	int gameState = 0;
	GameField* gameField_ptr;
	EventManager* eventManager_ptr;
	static Game* inst;

	Game();
	~Game() {};
public:
	bool startGame();
	bool restartGame();
	bool stopGame();
	GameField* getGameField();
	EventManager* getEventManager();
	static Game* getSingleton();
};

#endif
