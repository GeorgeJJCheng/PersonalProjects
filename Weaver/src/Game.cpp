#include "Game.h"

Game::Game(): player(new Unit("Player"))
{
    //ctor
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            Tile* tempTile = new Tile();
            board[i][j] = tempTile;
        }
    }
    board[0][0]->addResident(player);
}

Game::~Game()
{
    //dtor
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            delete board[i][j];
        }
    }
}

void Game::gameLoop()
{
    while(player->isAlive())
    {
        spawnEnemy();
        playerTurn();
    }
}

void Game::startGame()
{
    gameLoop();
}

void Game::playerTurn()
{

}

void Game::spawnEnemy()
{

}
