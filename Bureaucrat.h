#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"
#include "Player.h"
#include <iostream>

class Bureaucrat: public Computer
{
    public:
    Bureaucrat();
    char makeMove();
    
};

#endif