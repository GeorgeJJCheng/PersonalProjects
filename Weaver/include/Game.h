#ifndef GAME_H
#define GAME_H
#include "Tile.h"
#include "Player.h"

class Game
{
    public:
        Game();
        virtual ~Game();
        void gameLoop();
        void startGame();
        void playerTurn();
        void spawnEnemy();
    //protected:
    private:
        Tile* board[6][8];
        Unit* player;
};

#endif // GAME_H
