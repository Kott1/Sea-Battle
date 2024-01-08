#pragma once

#include "ShipLinkor.h"
#include "ShipCruiser.h"
#include "ShipFrigate.h"
#include "ShipBoat.h"

#include "math.h"
#include "Player.h"

#ifndef GAMEFIELD_H
#define GAMEFIELD_H

class GameField
{
private:
	GameField();
	~GameField() {};
	
	Player* Player1;
	Player* Player2;

	static GameField* instance;
public:

	Player* GetPlayer1() {
		return Player1;
	}

	Player* GetPlayer2() {
		return Player2;
	}

	static GameField* GetSingleton()
	{
		if (!instance) instance = new GameField();
		return instance;
	}
};

#endif // !GAMEFIELD_H