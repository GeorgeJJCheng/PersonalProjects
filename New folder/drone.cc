#include "drone.h"

using namespace std;

drone::drone()
{
    travel = 0;
    dir = 1;
}

void drone::forward()
{
    if (dir == 1)
    {
        curpos.y++;
    }
    else if (dir == 2)
    {
        curpos.x++;
    }
    else if (dir == 3)
    {
        curpos.y--;
    }
    else
    {
        curpos.x--;
    }
}

void drone::backward()
{
    if (dir == 1)
    {
        curpos.y--;
    }
    else if (dir == 2)
    {
        curpos.x--;
    }
    else if (dir == 3)
    {
        curpos.y++;
    }
    else
    {
        curpos.x++;
    }
}

void drone::left()
{
    if (dir == 1)
    {
        dir = 4;
    }
    else if (dir == 2)
    {
        dir = 1;
    }
    else if (dir == 3)
    {
        dir = 2;
    }
    else
    {
        dir = 3;
    }
}

void drone::right()
{
    if (dir == 1)
    {
        dir = 4;
    }
    else if (dir == 2)
    {
        dir = 1;
    }
    else if (dir == 3)
    {
        dir = 2;
    }
    else
    {
        dir = 3;
    }
}

Position drone::current()
{
    return curpos;
}

int totalDistance()
{
    return travel;
}

int drone::manhattanDistance()
{
    int sum;
    if(curpos.x < 0)
    {
        sum += curpos.x * -1;
    }
    else
    {
        sum += curpos.x;
    }
    if(curpos.y < 0)
    {
        sum += curpos.y * -1;
    }
    else
    {
        sum += curpos.y;
    }
    return sum;
}

bool drone::repeated()
{

}
