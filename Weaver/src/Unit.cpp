#include "Unit.h"
#include <string>

using namespace std;

Unit::Unit(): name("null"), level(0), exp(0), hp(0), atk(0), def(0), atkRange(0), moveRange(0)
{
    //ctor
}

Unit::Unit(string unitName): name(unitName)//, level(0), exp(0), hp(0), atk(0), def(0), atkRange(0), moveRange(0)
{
    if(unitName == "Enemy")
    {
        level = 1;
        exp = 30;
        hp = 2;
        atk = 3;
        def = 3;
        moveRange = 2;
        atkRange = 1;
    }
    else
    {
        level = 1;
        exp = 0;
        hp = 10;
        atk = 4;
        def = 2;
        moveRange = 2;
        atkRange = 1;
    }
}

Unit::~Unit()
{
    //dtor
}

bool Unit::isAlive()
{
    if(hp <= 0)
        return false;
    return true;
}

void Unit::checkExp()
{
    if(exp >= 100)
    {
        exp -= 100;
        level++;
        hp += 2;
        atk++;
        def++;
    }
}

int Unit::getAtkRange()
{
    return atkRange;
}

int Unit::getMoveRange()
{
    return moveRange;
}
