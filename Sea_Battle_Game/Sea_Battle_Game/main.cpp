#include "Sea_Battle_Game.h"
#include "ship.h"
#include "battle_logic.h"
#include "field.h"
using namespace std;

int main() {
	Game game;
	Ship ship;
	Player player;
	GameField field;

	//pair<int, int> i = {0, 0};
	//i.first++;
	//i.second++;

	//cout << i.first << ", " << i.second;

	while (!game.getGameEnded()) {
		game.startGame();

		game.placeShip(0, 0, 0, true);
		game.placeShip(2, 2, 4, false);
		game.placeShip(5, 3, 7, false);
		game.placeShip(2, 8, 9, true);

		game.print();

		game.endGame();
		//game.restartGame();
	}

	return 0;
}