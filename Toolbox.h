#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class Toolbox: public Computer
{
    public:
    Toolbox();
    char makeMove();

};

#endif