#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class RandomComputer: public Computer
{
    public:
    RandomComputer();
    char makeMove();

};

#endif