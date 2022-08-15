#include "FistfullODollars.h"
#include "Player.h"

FistfullODollars::FistfullODollars()
{
    reset();
}

void FistfullODollars::makeMove()
{
    changeChoice(moves[count % 3]);
    count++;
}

void FistfullODollars::reset()
{
    count = 0;
}