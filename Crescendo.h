#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class Crescendo: public Computer
{
    public:
    Crescendo();
    char makeMove();
    int round=0;
};

#endif