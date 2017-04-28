#include <conio.h>
#include <string>
#include <iostream>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define SELECT 97
#define SPACE 32

using namespace std;

void printBoard(char board[9][9], int dim)
{
    for (int b = 0; b < dim ; b++)
    {
        cout << "._";
    }
    cout << "." << endl;
    for (int a = 0; a < dim; a++)
    {
        for (int b = 0; b < dim; b++)
        {
            cout << "|";
            if (board[a][b] == ' ')
            {
                cout << "_";
            }
            else
            {
                cout << board[a][b];
            }
        }
        cout << "|" << endl;
    }
}

int main()
{
    char board[9][9];
    for (int a = 0; a < 9; a++)
    {
        for (int b = 0; b < 9; b++)
        {
            board[a][b] = ' ';
        }
    }
    board[4][4] = 'C';
    int curX = 4;
    int curY = 4;
    int tarX = 4;
    int tarY = 4;
    int range = 3;
    int distance = tarX + tarY - curX - curY;
    printBoard(board, 9);
    int command;
    while (1)
    {
        command = 0;
        command = getch();
        if (command == KEY_UP)
        {
            if (tarY-1 < 9)
            {
                if (tarX != curX || tarY != curY)
                {
                    board[tarY][tarX] = '|';
                }
                tarY--;
                board[tarY][tarX] = '^';
            }
        }
        else if (command == KEY_LEFT)
        {
            if (tarX-1 > -1)
            {
                if (tarX != curX || tarY != curY)
                {
                    board[tarY][tarX] = '-';
                }
                tarX--;
                board[tarY][tarX] = '<';
            }
        }
        else if (command == KEY_DOWN)
        {
            if (tarY+1 > -1)
            {
                if (tarX != curX || tarY != curY)
                {
                    board[tarY][tarX] = '|';
                }
                tarY++;
                board[tarY][tarX] = 'v';
            }
        }
        else if (command == KEY_RIGHT)
        {
            if (tarX+1 < 9)
            {
                if (tarX != curX || tarY != curY)
                {
                    board[tarY][tarX] = '-';
                }
                tarX++;
                board[tarY][tarX] = '>';
            }
        }
        else if (command == SELECT)
        {
            curX = tarX;
            curY = tarY;
            for (int a = 0; a < 9; a++)
            {
                for (int b = 0; b < 9; b++)
                {
                    board[a][b] = ' ';
                }
            }
            board[curY][curX] = 'C';
        }
        else if (command == SPACE)
        {
            break;
        }
        /*distance = tarX + tarY - curX - curY;
        if (distance < 0)
        {
            distance *= -1;
        }*/
        printBoard(board, 9);
    }
}
