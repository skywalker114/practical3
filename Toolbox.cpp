#include <string>
#include <iostream>
#include "Player.h"
#include "Toolbox.h"
using namespace std;

    Toolbox::Toolbox() : Player("Toolbox") {}
    Toolbox::~Toolbox() {}
    string Toolbox::performMove()
{
    hand = "Scissors"; 
    return hand;
}