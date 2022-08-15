#ifndef Bureaucrat_H
#define Bureaucrat_H
#include "Player.h"
using namespace std;

class Bureaucrat : public Player {
    public:
        Bureaucrat();
        string performMove();
        ~Bureaucrat();
    private:
        string hand;
};
#endif
