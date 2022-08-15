#ifndef Avalanche_H
#define Avalanche_H
#include "Player.h"
using namespace std;

class Avalanche : public Player 
{
    public:
        Avalanche();
        string performMove();
        string hand;
};
#endif