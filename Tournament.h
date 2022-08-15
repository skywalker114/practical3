#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <iostream>
#include "Referee.h"
#include "Player.h"
#include <array>

class Tournament
{
   public:
   Tournament();
   Player* run(std::array< Player* ,8 >competitors);
   char match(Player pl1,Player pl2);
   Player competitors[8];
};

#endif