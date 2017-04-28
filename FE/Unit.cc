#include <string>
#include "Unit.h"

using namespace std;

Unit::Unit(string name, int maxHP, int maxMove, int atk, int def, int xPos, int yPos): loc(xPos, yPos)
{
    name = name;
    maxHP = maxHP;
    curHP = maxHP;
    atk = atk;
    def = def;
    //loc = Position(xPos, yPos);
}
void Unit::getHit(int damage)
{
    curHP -= (damage - def);
}
void Unit::moveUnit(int x, int y)
{
    loc.setX(x);
    loc.setY(y);
}
