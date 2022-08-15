#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Player.h"
using namespace std;

class Toolbox : public Player 
{
    public:
        Toolbox();
        string performMove();
        ~Toolbox();
    private:
        string hand;
};
#endif