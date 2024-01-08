#include "GameWorld.h"

#include <iostream>
#include <Windows.h>

void DisplayGameStart(void* Context)
{
	printf("Game start!\n");
}

void DispalyRules(void* Context)
{
	printf("glhf\n");
}

void OnPlayerShipHitHandle(void* Context)
{
	OnShipHitContext* ctx = (OnShipHitContext*)Context;
	printf("Ship hited by Player%i ship health remaining %i\n",ctx->AttackerId + 1,ctx->HitedShip->health);
}

void OnPlayerShipDistroyedHandle(void* Context)
{
	OnShipHitContext* ctx = (OnShipHitContext*)Context;
	printf("Ship destryed by Player%i ship name %s\n", ctx->AttackerId + 1, ctx->HitedShip->name);
}

void OnGameStopHandler(void* Context)
{
	printf("game stopd!\n");
	Sleep(2000);
}

void OnPlayerWinHandle(void* Context)
{
	OnPlayerWinContext* ctx = (OnPlayerWinContext*)Context;
	printf("Player%i win game!\n", ctx->WinerUUID + 1);
}

void InitPlayerShips(Player* player)
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

void DestroyAllTargets(Player* player1, Player* player2)
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
	GameWorld* world = GameWorld::GetSingleton();
	EventManager* event_manager = world->GetEventManager();

	event_manager->RegisterEventListener(OnGameStart, &DisplayGameStart);
	event_manager->RegisterEventListener(OnGameStart, &DispalyRules);
	event_manager->RegisterEventListener(OnShipHit,  &OnPlayerShipHitHandle);
	event_manager->RegisterEventListener(OnShipDestroy, &OnPlayerShipDistroyedHandle);
	event_manager->RegisterEventListener(OnPlayerWin,  &OnPlayerWinHandle);

	GameField* game_field = world->GetGameField();

	Player* player1 = game_field->GetPlayer1();
	Player* player2 = game_field->GetPlayer2();

	InitPlayerShips(player1);
	InitPlayerShips(player2);

	DestroyAllTargets(player1, player2);

	world->StartGame();
	world->StopGame();
}

