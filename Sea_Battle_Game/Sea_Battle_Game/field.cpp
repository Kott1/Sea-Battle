#include "field.h"

GameField::GameField()
{
	Player1 = new Player(1);
	Player2 = new Player(2);

}

GameField* GameField::instan = nullptr;