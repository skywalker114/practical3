#include "Tournament.h"
#include "Player.h"
#include "Referee.h"
#include <array>
#include <iostream>

Tournament::Tournament()
{
    resetcount();
}

Player * Tournament::run(std::array<Player *, 8>  competitors)
{
    Referee judge;
    const int games = 5;
    int result = 0, sf = 0, f = 0;
    std::array<int, 4> sfin = {0 , 0, 0, 0};
    std::array<int,2> fin = {0, 0};
    for (int i = 0; i < (int)sfin.max_size(); i++) //first round
    {
        for (int k = 0; k < (int)competitors.max_size(); k++)
        {
            competitors.at(k)->reset();
        }
        resetcount();
        result = 0;
        for (int j = 0; j < games; j++)
        {
            result = judge.refGame(competitors.at(i * 2), competitors.at(i * 2 + 1));
            if (result != 2)
            {
                wins.at(result)++;
            }
        }
        if (wins.at(1) > wins.at(0))
        {
            sfin.at(sf) = i * 2 + 1;
        }
        else
        {
            sfin.at(sf) = i * 2;
        }
        sf++;
    }

    for (int i = 0; i < (int)fin.max_size(); i++)//semi-finals
    {
        for (int k = 0; k < (int)competitors.max_size(); k++)
        {
            competitors.at(k)->reset();
        }
        resetcount();
        result = 0;
        for (int j = 0; j < games; j++)
        {
            result = judge.refGame(competitors.at(sfin.at(i * 2)), competitors.at(sfin.at(i * 2 + 1)));
            if (result != 2)
            {
                wins.at(result)++;
            }
        }
        if (wins.at(1) > wins.at(0))
        {
            fin.at(f) = sfin.at(i * 2 + 1);
        }
        else
        {
            fin.at(f) = sfin.at(i * 2);
        }
        f++;
    }

    for (int k = 0; k < (int)competitors.max_size(); k++)
    {
        competitors.at(k)->reset();
    }
    resetcount();
    result = 0;
    for (int j = 0; j < games; j++)
    {
        result = judge.refGame(competitors.at(fin.at(0)), competitors.at(fin.at(1)));
        if (result != 2)
        {
            wins.at(result)++;
        }
    }
    return competitors.at(fin.at((wins.at(1) > wins.at(0))));;
}

void Tournament::resetcount()
{
    wins.at(0) = 0;
    wins.at(1) = 0;
}