#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "baseShip.h"

class Player
{
private:
    std::vector<std::vector<int>> Field;
    std::vector<BaseShip*> Ships;

    bool CanPlace(Vec2 Pos, int size, bool isHorizontal);
public:
    const char* name;

    void PlaceShip(Vec2 Pos, bool IsHorizontal, BaseShip* NewShip);
    BaseShip* HitCell(Vec2 Pos);

    bool Shoot(Player* target, Vec2 Pos);

    Player(int nid);
};
#endif