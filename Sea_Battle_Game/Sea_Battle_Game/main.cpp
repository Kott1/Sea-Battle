#include "Sea_Battle_Game.h"
#include <iostream>
#include <Windows.h>

void displayGameStart(void* context)
{
	printf("Game started!\n");
}

void onPlayerShipHitHandle(void* context)
{
	OnShipHitContext* ctx = (OnShipHitContext*)context;
	printf("Ship hited by Player%i, remaining ship health %i\n", ctx->attackerId + 1, ctx->hittedShip->health);
}

void onPlayerShipDistroyedHandle(void* context)
{
	OnShipHitContext* ctx = (OnShipHitContext*)context;
	printf("%s destroyed by Player%i\n", ctx->hittedShip->name, ctx->attackerId + 1);
}

void onGameStopHandler(void* context)
{
	printf("game stopd!\n");
	Sleep(2000);
}

void onPlayerWinHandle(void* context)
{
	OnPlayerWinContext* ctx = (OnPlayerWinContext*)context;
	printf("Player%i win game!\n", ctx->winerId + 1);
}

void initPlayerShips(Player* player)
{
	player->PlaceShip(Vec2(0, 0), true, new ShipBoat());
	player->PlaceShip(Vec2(3, 3), true, new ShipBoat());
	player->PlaceShip(Vec2(7, 8), true, new ShipBoat());
	player->PlaceShip(Vec2(8, 2), true, new ShipBoat());

	player->PlaceShip(Vec2(2, 1), false, new ShipFrigate());
	player->PlaceShip(Vec2(2, 6), false, new ShipFrigate());
	player->PlaceShip(Vec2(6, 4), true, new ShipFrigate());

	player->PlaceShip(Vec2(4, 6), false, new ShipCruiser());
	player->PlaceShip(Vec2(5, 5), true, new ShipCruiser());

	player->PlaceShip(Vec2(4, 0), true, new ShipLinkor());
}

void destroyAllTargets(Player* player1, Player* player2)
{
	player1->Shoot(player2, Vec2(0, 0));
	player1->Shoot(player2, Vec2(3, 3));
	player1->Shoot(player2, Vec2(7, 8));
	player1->Shoot(player2, Vec2(8, 2));

	player1->Shoot(player2, Vec2(2, 1));
	player1->Shoot(player2, Vec2(2, 2));

	player1->Shoot(player2, Vec2(2, 6));
	player1->Shoot(player2, Vec2(2, 7));

	player1->Shoot(player2, Vec2(6, 4));
	player1->Shoot(player2, Vec2(7, 4));

	player1->Shoot(player2, Vec2(4, 6));
	player1->Shoot(player2, Vec2(4, 7));
	player1->Shoot(player2, Vec2(4, 8));

	player1->Shoot(player2, Vec2(5, 5));
	player1->Shoot(player2, Vec2(6, 5));
	player1->Shoot(player2, Vec2(7, 5));

	player1->Shoot(player2, Vec2(4, 0));
	player1->Shoot(player2, Vec2(5, 0));
	player1->Shoot(player2, Vec2(6, 0));
	player1->Shoot(player2, Vec2(7, 0));
}

int main()
{
	Game* world = Game::getSingleton();
	EventManager* event_manager = world->getEventManager();

	event_manager->registerEvent(OnGameStart, &displayGameStart);
	event_manager->registerEvent(OnShipHit, &onPlayerShipHitHandle);
	event_manager->registerEvent(OnShipDestroy, &onPlayerShipDistroyedHandle);
	event_manager->registerEvent(OnPlayerWin, &onPlayerWinHandle);

	GameField* game_field = world->getGameField();

	Player* player1 = game_field->GetPlayer1();
	Player* player2 = game_field->GetPlayer2();

	initPlayerShips(player1);
	initPlayerShips(player2);

	destroyAllTargets(player1, player2);

	world->startGame();
	world->stopGame();

	return 0;
}