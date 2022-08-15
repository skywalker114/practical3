#pragma once
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

class RandomComputer : public Player
{
private:
    char choices[4] = {'R','P','S'};
public:
    RandomComputer();
    void makeMove();
};
#endif