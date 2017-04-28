#ifndef PLAYER_H
#define PLAYER_H
#include "Unit.h"

class Player : public Unit
{
    public:
        Player();
        virtual ~Player();
        void checkExp();
    protected:
    private:
        int exp;
        int level;
};

#endif // PLAYER_H
