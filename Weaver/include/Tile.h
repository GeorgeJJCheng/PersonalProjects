#ifndef TILE_H
#define TILE_H
#include <string>
#include "Unit.h"

class Tile
{
    public:
        Tile();
        virtual ~Tile();
        void applyTileEffect();
        void addResident(Unit* newRes);
        void removeResident();
        bool hasResident();
    protected:
    private:
        Unit* resident;
        std::string tileType;
};

#endif // TILE_H
