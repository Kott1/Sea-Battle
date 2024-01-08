#include "Sea_Battle_Game.h"

Game::Game() {
	gameField_ptr = GameField::GetSingleton();
	eventManager_ptr = EventManager::getSingleton();
}

bool Game::startGame() {

	return true;
}

bool Game::restartGame() {
	return true;
}

bool Game::stopGame() {

	return true;
}

EventManager* Game::getEventManager() {
	return eventManager_ptr;
}

GameField* Game::getGameField() {
	return gameField_ptr;
}

Game* Game::getSingleton() {
	if (!inst) inst = new Game();
	return inst;
}

Game* Game::inst = nullptr;