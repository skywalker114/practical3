#pragma once
#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Player.h"

class PaperDoll : public Player
{
private:
    int count;
    char moves[4] = {'P', 'S', 'S'};
public:
    PaperDoll();
    void makeMove();
    void reset();
};
#endif