#ifndef UNIT_H
#define UNIT_H
#include <string>

class Unit
{
    public:
        Unit();
        Unit(std::string unitName);
        virtual ~Unit();
        bool isAlive();
        void checkExp();
        int getAtkRange();
        int getMoveRange();
    protected:
    private:
        std::string name;
        int level;
        int exp;
        int hp;
        int atk;
        int def;
        int atkRange;
        int moveRange;
};

#endif // UNIT_H
