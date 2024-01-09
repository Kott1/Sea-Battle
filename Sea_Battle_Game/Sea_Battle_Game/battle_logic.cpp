#include "battle_logic.h"
#include "eventManager.h"

bool Player::CanPlace(Vec2 Pos, int size, bool isHorizontal)
{
    if (Field[Pos.x][Pos.y] != 0)
        return false;

    if (isHorizontal)
    {
        if (Pos.x + size > 10)
            return false;
    }
    else
    {
        if (Pos.y + size > 10)
            return false;
    }

    int buffer = size - 1;

    if (buffer > 0)
    {
        for (int i = 0; i < buffer; i++)
        {
            if (isHorizontal)
            {
                if (Field[i + Pos.x][Pos.y] != 0) return false;
                continue;
            }

            if (Field[Pos.x][Pos.y + i] != 0) return false;
        }
    }

    return true;
}

void Player::PlaceShip(Vec2 Pos, bool IsHorizontal, BaseShip* NewShip)
{
    if (totalShipCount > 10)
        return;

    if ((Pos.x < 0 && Pos.x > 10) && (Pos.y < 0 || Pos.y > 10))
        return;


    if (!CanPlace(Pos, NewShip->size, IsHorizontal))
        return;

    int internalSize = NewShip->size;

    if (internalSize > 0)
    {
        for (int index = 0; index < internalSize; index++)
        {
            if (IsHorizontal)
            {
                Field.at(index + Pos.x).at(Pos.y) = totalShipCount;
                continue;
            }

            Field.at(Pos.x).at(Pos.y + index) = totalShipCount;
        }
    }

    NewShip->id = totalShipCount;
    NewShip->ownerId = this->id;

    Ships.push_back(NewShip);
    totalShipCount++;
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
    BaseShip* ship = target->HitCell(Pos);

    if (!ship) return false;

    if (ship->health <= 0) {
        target->totalShipCount--;
    }
    else
    {

    }

    if (target->totalShipCount == 1)
    {

    }

    return true;
}

Player::Player(int nid)
{
    id = nid;

    totalShipCount = 1;

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