#include "Position.h"

using namespace std;

Position::Position(int myX, int myY)
{
    x = myX;
    y = myY;
}

int Position::getX()
{
    return x;
}
int Position::getY()
{
    return y;
}
void Position::setX(int newX)
{
    x = newX;
}
void Position::setY(int newY)
{
    y = newY;
}
