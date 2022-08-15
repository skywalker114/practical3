#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
    char choice;
public:
    virtual void reset();
    virtual void makeMove() = 0;
    char getMove() const;
    void changeChoice(char move);
};
#endif