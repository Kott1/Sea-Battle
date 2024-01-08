#include "Sea_Battle_Game.h"

#include <iostream>
#include <Windows.h>

void initPlayerShips(Player* player)
{

}

void destroyAllTargets(Player* player1, Player* player2)
{

}

int main()
{
	Game* world = Game::getSingleton();
	EventManager* event_manager = world->getEventManager();

	GameField* game_field = world->getGameField();

	Player* player1 = game_field->GetPlayer1();
	Player* player2 = game_field->GetPlayer2();

	initPlayerShips(player1);
	initPlayerShips(player2);

	destroyAllTargets(player1, player2);

	world->startGame();
	world->stopGame();
}