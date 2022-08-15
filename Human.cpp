#include "Human.h"
#include "Player.h"
#include <iostream>


void Human::makeMove()
{
    char input;
    while (1)
    {
        std::cout << "Enter move: ";
        std::cin >> input;
        // for (int i = 0; i < input.size(); i++)
        // {
        //     input.at(i) = std::toupper(input.at(i));
        // }
        if ((input == 'R') || (input == 'P') || (input == 'S'))
        {
            changeChoice(input);
            break;
        }
        // std::cout << std::endl << "Invalid input, type either ROCK, PAPER, or SCISSORS ONLY." << std::endl << std::endl;
    }
}