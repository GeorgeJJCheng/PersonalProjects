#include "Position.h"
#include <vector>

struct drone
{
    Position curpos;
    int travel;
    int dir;


    drone();

    void forward();
    void backward();
    void left();
    void right();
    Position current();
    int totalDistance();
    int manhattanDistance();
    bool repeated();
}
