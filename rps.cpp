#include "Referee.h"
#include "Tournament.h"
#include <iostream>
#include <array>

int main()
{
    //create pointers to the all kinds of players
    Player * player1 = new Human();
    Player * player2 = new RandomComputer();
    Player * player3 = new Avalanche();
    Player * player4 = new Bureaucrat();
    Player * player5 = new Toolbox();
    Player * player6 = new Crescendo();
    Player * player7 = new PaperDoll();
    Player * player8 = new FistfullODollars();

    //create a pointer to tournament called games
    Tournament * games = new Tournament();

    //create new array of players pointers of size 8
    std::array<Player *, 8> players = {player1, player2, player3, player4, player5, player6, player7, player8};
    
    //print out the results of the tournament
    std::cout << games->run(players) << std::endl;

    return 0;
}