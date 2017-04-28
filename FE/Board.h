#include <vector>
#include "Unit.cc"

class Board
{
private:
    std::vector <Unit*> playerUnits;
    std::vector <Unit*> enemyUnits;
    int myBoard [10][10];

public:
    Board();
    void unitMove(Unit thisUnit);
    void unitAtk(Unit thisUnit);
    void AIMove();
    bool hasTarget(Unit thisUnit);
    bool hasCollision(char dir, Unit thisUnit);
    bool gameOver();
    void printBoard();
};
