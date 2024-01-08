#include "GameField.h"

GameField::GameField()
{
	Player1 = new Player(0);
	Player2 = new Player(1);

}

GameField* GameField::instance = nullptr;