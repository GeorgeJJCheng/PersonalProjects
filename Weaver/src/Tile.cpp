#include "Tile.h"

Tile::Tile(): tileType("base")
{
    //ctor
    resident = nullptr;
}

Tile::~Tile()
{
    //dtor
    if(resident)
        delete resident;
}

void Tile::addResident(Unit* newRes)
{
    if(!hasResident())
        resident = newRes;
}

void Tile::removeResident()
{
    resident = nullptr;
}

bool Tile::hasResident()
{
    if(resident)
        return true;
    return false;
}
