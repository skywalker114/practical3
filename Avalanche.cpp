#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Avalanche.h"

Avalanche::Avalanche()
{
   
}

char Avalanche::makeMove()
{
    round++;
    return 'R';
}
