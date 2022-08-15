#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class Avalanche: public Computer
{
    public:
    Avalanche();
    char makeMove();
    int round=0;

};

#endif