#pragma once
#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Human.h"

class Referee
{
private:
public:
    Referee() {};
    int refGame(Player * player1, Player * player2);
};
#endif 