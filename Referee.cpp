#include "Referee.h"
#include "Computer.h"
#include "Human.h"

char Referee::refGame(Human player1, Computer player2)
{
    player1.makeMove();
    player2.makeMove();
    char move1 = player1.getMove(), move2 = player2.getMove();
    if (move1 == move2) return 'T';
    if (((move1 == 'R') && (move2 == 'S')) || ((move1 == 'P') && (move2 == 'R')) || ((move1 == 'S') && (move2 == 'P'))) return 'W';
    if (((move1 == 'R') && (move2 == 'P')) || ((move1 == 'P') && (move2 == 'S')) || ((move1 == 'S') && (move2 == 'R'))) return 'L';
    return 0;
}