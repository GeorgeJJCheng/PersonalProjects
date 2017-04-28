#include <string>
#include "Position.cc"

class Unit
{
private:
    std::string name;
    int maxHP;
    int curHP;
    int maxMove;
    int atk;
    int def;
    Position loc;

public:
    Unit(std::string name, int maxHP, int maxMove, int atk, int def, int xPos, int yPos);
    void getHit(int damage);
    void moveUnit(int x, int y);
};
