#pragma once
#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Player.h"

class Crescendo : public Player
{
private:
    int count;
    char moves[4] = {'P', 'S', 'R'};
public:
    Crescendo();
    void makeMove();
    void reset();
};
#endif 