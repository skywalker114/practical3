#include <iostream>
#include <string>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Player.h"

Referee::Referee()
{

}


char Referee::refGame(Player player1,Player player2)
{
    char winornot;
    char player1move=player1.makeMove();
    char player2move=player2.makeMove();

    if (player1move=='R' && player2move=='P')
    {
        winornot='L';
    }
    else if(player1move=='R' && player2move=='S')
    {
        winornot='W';
    }
    else if(player1move=='R' && player2move=='R')
    {
        winornot='T';
    }
    else if(player1move=='P' && player2move=='S')
    {
        winornot='L';
    }
    else if(player1move=='P' && player2move=='R')
    {
        winornot='W';
    }
    else if(player1move=='P' && player2move=='P')
    {
        winornot='T';
    }
    else if(player1move=='S' && player2move=='S')
    {
        winornot='T';
    }
    else if(player1move=='S' && player2move=='P')
    {
        winornot='W';
    }
    else 
    {
        winornot='L';
    }
    
    return winornot;
}