#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Human.h"

int Referee::refGame(Player * player1, Player * player2)
{
    player1->makeMove();
    player2->makeMove();
    char move1 = player1->getMove(), move2 = player2->getMove();
    if (move1 == move2) return 2;
    if (((move1 == 'R') && (move2 == 'S')) || ((move1 == 'P') && (move2 == 'R')) || ((move1 == 'S') && (move2 == 'P'))) return 0;
    if (((move1 == 'R') && (move2 == 'P')) || ((move1 == 'P') && (move2 == 'S')) || ((move1 == 'S') && (move2 == 'R'))) return 1;
    return -1;
}