#include "Player.h"
#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h>

RandomComputer::RandomComputer()
{
    srand(time(NULL));
}

void RandomComputer::makeMove()
{
    changeChoice(choices[rand() % 3]);
}