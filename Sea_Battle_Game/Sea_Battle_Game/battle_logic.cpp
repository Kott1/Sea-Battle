#include "battle_logic.h"
#include "ship.h"

Player::Player(Ship &shipsArray[10]) {
    wonGame = false;
    isYourTurn = false;

    for (int i = 0; i < 10; ++i) {
        shipsRemain[i] = shipsArray[i];
    }
}

void Player::setShipsRemain(Ship shipsArray[10]) {
    for (int i = 0; i < 10; ++i) {
        shipsRemain[i] = shipsArray[i];
    }
}

void Player::setWonGame(bool isWinner) {
    wonGame = isWinner;
}

void Player::setTurn(bool yourTurn) {
    isYourTurn = yourTurn;
}

void Player::getShipsRemain(Ship &shipsArray[10]) {
    for (int i = 0; i < 10; i++)
    {
        shipsArray[i] = shipsRemain[i];
    }
}

bool Player::getWonGame() {
    return wonGame;
}

bool Player::getTurn() {
    return isYourTurn;
}

bool Player::isWinner(int &field[10][10]) {
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (field[i][j] != 0 && field[i][j] != -1)
            {
                return false;
            }
        }
    }

    return true;
}

void Player::attack() {

}