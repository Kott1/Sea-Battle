#include "battle_logic.h"
#include "eventManager.h"

bool Player::CanPlace(Vec2 Pos, int size, bool isHorizontal)
{

}

void Player::PlaceShip(Vec2 Pos, bool IsHorizontal, BaseShip* NewShip)
{

}

BaseShip* Player::HitCell(Vec2 Pos)
{
    int id = Field.at(Pos.x).at(Pos.y);

    if (id <= 0) {
        return nullptr;
    }

    for (int index = 0; index < Ships.size(); index++)
    {
        BaseShip* Ship = Ships.at(index);
        if (Ship->id == id) {

            Field.at(Pos.x).at(Pos.y) = -1;

            Ship->health--;
            return Ship;
        }
    }

    return nullptr;
}

bool Player::Shoot(Player* target, Vec2 Pos)
{

}

Player::Player(int nid)
{
    for (int index = 0; index < 10; index++)
    {
        Field.push_back(std::vector<int>());
    }

    for (int index = 0; index < 10; index++)
    {
        for (int index2 = 0; index2 < 10; index2++)
        {
            Field[index].push_back(0);
        }
    }
}