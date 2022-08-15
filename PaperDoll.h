#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class PaperDoll: public Computer
{
    public:
    PaperDoll();
    char makeMove();

};

#endif