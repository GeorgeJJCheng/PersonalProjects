#include <vector>
#include <iostream>
#include <stdlib.h>
#include "Board.h"

using namespace std;

Board::Board()
{
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
            myBoard[a][b] = 0;
        }
    }
    //Below is default unit generation for AI testing/Tutorial purposes
    myBoard[0][0] = 1;
    myBoard[9][9] = 1;
}
void Board::unitMove(Unit thisUnit)
{
    int curX = thisUnit.getX();
    int curY = thisUnit.getY();
    int targetX = curX;
    int targetY = curY;
    bool confirmEnd = false;
    while(!confirmEnd) //Look into arrowkey implementation instead of command implementation
    {
        char dir;
        cin >> dir;
        if (dir == 'n')
        {
            if(!hasCollision(dir, thisUnit))
            {
                targetY++;
                //Display movement arrow tracks
            }
            else
            {
                cout << "Invalid move." << endl;
            }
        }
        else if (dir == 'e')
        {
            if(!hasCollision(dir, thisUnit))
            {
                targetX++;
                //Display movement arrow tracks
            }
            else
            {
                cout << "Invalid move." << endl;
            }
        }
        else if (dir == 's')
        {
            if(!hasCollision(dir, thisUnit))
            {
                targetY--;
                //Display movement arrow tracks
            }
            else
            {
                cout << "Invalid move." << endl;
            }
        }
        else if (dir == 'w')
        {
            if(!hasCollision(dir, thisUnit))
            {
                targetX--;
                //Display movement arrow tracks
            }
            else
            {
                cout << "Invalid move." << endl;
            }
        }
        else if (dir == 'x') //Confirm move, update positions
        {
            thisUnit.setX(targetX);
            thisUnit.setY(targetY);
            confirmEnd = true;
        }
        else
        {
            cout << "Invalid command." << endl;
        }
        printBoard();
    }
    if (hasTarget(thisUnit))
    {
        //Show target name, HP, damage they would take, etc, and ask for confirmation
    }
}
void Board::unitAtk(Unit thisUnit) //only runs if hasTarget is valid
{

}
void Board::AIMove()
{

}
bool Board::hasTarget(Unit thisUnit)
{
    //check if any adjacent tiles are non-empty
}
bool Board::hasCollision(char dir, Unit thisUnit)
{
    //check for other units and also edge of map
}
bool Board::gameOver()
{
    //check if either vector is empty
}
void Board::printBoard()
{
    for (int a = 9; a > -1; a--)
    {
        for (int b = 9; b > -1; b--)
        {
            //print board with character icons, map tiles, etc.
        }
    }
}
