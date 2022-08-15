#include "PaperDoll.h"
#include "Player.h"

PaperDoll::PaperDoll()
{
    reset();
}

void PaperDoll::makeMove()
{
    changeChoice(moves[count % 3]);
    count++;
}

void PaperDoll::reset()
{
    count = 0;
}