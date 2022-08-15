#include "Crescendo.h"
#include "Player.h"

Crescendo::Crescendo()
{
    reset();
}

void Crescendo::makeMove()
{
    changeChoice(moves[count % 3]);
    count++;
}

void Crescendo::reset()
{
    count = 0;
}