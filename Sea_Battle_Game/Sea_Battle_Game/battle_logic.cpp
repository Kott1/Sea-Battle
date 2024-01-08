#include "battle_logic.h"

Player::Player() {
    wonGame = false;
    isYourTurn = false;
}

void Player::setWonGame(bool isWinner) {
    wonGame = isWinner;
}

void Player::setTurn(bool yourTurn) {
    isYourTurn = yourTurn;
}

bool Player::getWonGame() {
    return wonGame;
}

bool Player::getTurn() {
    return isYourTurn;
}

//bool Player::isWinner(vector<Ship> ships) {
//    for (int i = 0; i < 10; i++)
//    {
//        if()
//    }
//
//    return true;
//}