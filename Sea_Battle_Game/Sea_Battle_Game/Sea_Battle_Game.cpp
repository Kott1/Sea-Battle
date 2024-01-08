#include "Sea_Battle_Game.h"

bool Game::getGameEnded() {
	return gameEnded;
}

void Game::startGame() {
	restartGame();

	for (int i = 0; i < 10; i++) {
		p1Ships.push_back(Ship(i));
		p2Ships.push_back(Ship(i));
	}

	p1.setTurn(true);
}

void Game::endGame() {
	gameEnded = true;
}

void Game::attack() {

}

void Game::restartGame() {
	p1Ships.clear();
	p2Ships.clear();
	gameEnded = false;
	p1 = Player();
	p2 = Player();
	field1 = GameField();
	field2 = GameField();
}

void Game::placeShip(int x, int y, int i, bool vertical) {
	pair<int, int> xy;
	xy.first = x;
	xy.second = y;

	if (p1.getTurn()) {
		p1Ships[i].setPosition(xy, vertical);
		field1.setShip(p1Ships[i]);
	}
	else {
		p2Ships[i].setPosition(xy, vertical);
		field2.setShip(p2Ships[i]);
	}
}

void Game::print() {
	field1.printField();
}