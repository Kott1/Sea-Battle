#include "field.h"

GameField::GameField() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            fieldMarking[i][j] = 0;
        }
    }
}

void GameField::clearField() {
	//...
}

bool GameField::isAllShipsSunk() {
	//...
	
	return 0;
}

void GameField::setShip(Ship ship) {
	for (int i = 0; i < ship.getHealth(); i++) {
		fieldMarking[ship.getCoords()[i].first][ship.getCoords()[i].second] = ship.getIndex();
	}
}

void GameField::printField() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << fieldMarking[i][j] << " ";
		}
		cout << endl;
	}
}