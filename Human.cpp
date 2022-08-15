#include <iostream>
#include <string>
#include "Human.h"
#include "Player.h"

Human::Human()
{

}

char Human::makeMove()
{
   char move;
   std::cout<<"Enter move: ";
   std::cin>>move;
   while(move!='R' && move!='S' &&  move!='P')
   {
       std::cout<<"Enter move: ";
       std::cin>>move;
   }
   return move;
}