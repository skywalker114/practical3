#include <iostream>
#include "Player.h"
#include "Referee.h"
#include "Tournament.h"

Tournament::Tournament()
{
   
    
}

char Tournament::match(Player pl1, Player pl2)
{
    int pl1wins=0;
    int pl2wins=0;
    Referee refofgame;

    for(int i=0;i<5;i++)
    {
        char result=refofgame.refGame(pl1,pl2);
        if(result=='W')
        {
            pl1wins++;
        }
        if(result=='L')
        {
            pl2wins++;
        }
    }

    if(pl1wins<pl2wins)
    {
        return 'L';
    }
    else 
    {return 'W';}
    
}


Player* Tournament::run(std::array< Player* ,8 >competitors)
{
    int num_players = 8;
    int top_4[4];
    int top_2[2];
    Referee Ref;
    
    for(int i=0;i<num_players;i+=2)
    {
        char result=match(*competitors[i],*competitors[i+1]);
        if(result=='W')
        top_4[i/2] = i;
        else
        top_4[i/2] = i+1;  
    }
    
    for(int i=0;i<num_players/2;i+=2)
    {
        char result=match(*competitors[top_4[i]],*competitors[top_4[i+1]]);
        if(result=='W')
        top_2[i/2] = top_4[i];
        else
        top_2[i/2] = top_4[i+1];  
    }
    
    char result=match(*competitors[top_2[0]],*competitors[top_2[1]]);
        if(result=='W')
        return competitors[top_2[0]];
        else
        return competitors[top_2[1]];
}