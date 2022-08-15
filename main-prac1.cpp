#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <string>
#include "Player.h"
#include "Tournament.h"
#include <array>
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "Crescendo.h"
#include "Toolbox.h"
using namespace std;

int main()
{
    std::array<Player*, 8> arr;
    Tournament champion;
    arr.at(0) = new Avalanche;
    arr.at(1) = new Bureaucrat();
    arr.at(2) = new Bureaucrat();
    arr.at(3) = new Toolbox();
    arr.at(4) = new Toolbox();
    arr.at(5) = new Crescendo();
    arr.at(6) = new Crescendo();
    arr.at(7) = new FistfullODollars();
    Player *winner = champion.run(arr);
    std::cout<<"Winner is:"<<winner;
   
   

   
    
    
    
    return 0;
}