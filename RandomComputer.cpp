#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h>

RandomComputer::RandomComputer()
{
   
}

char RandomComputer::makeMove()
{
    srand(time (NULL));
    int num;
    num= rand()%9 +1;
    
    if(num==1)
    {
        return 'R';
    }
    else if(num==2)
    {
        return 'P';
    }
    else
    return 'S';
}
