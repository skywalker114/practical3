#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Crescendo.h"

Crescendo::Crescendo()
{
   
}

char Crescendo::makeMove()
{
   if(round%5==1)
   {return 'P';}
   else if(round%5==2)
   {return 'S';}
   else if(round%5==3)
   return 'R';
   else if(round%5==4)
   return 'P';
   else
   return 'S';

   
    
}
