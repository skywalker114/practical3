#pragma once
#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Player.h"

class FistfullODollars : public Player
{
private:
    int count;
    char moves[4] = {'R', 'P', 'P'};
    //0,1,2
    //
public:
    FistfullODollars();
    void makeMove();
    void reset();
};
#endif