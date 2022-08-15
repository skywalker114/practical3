#ifndef PLAYER_H
#define PLAYER_H
PaperDoll.h

class Player 
{
    public:
        Player();
        Player(std::string);
        string getName();
        virtual string performMove();
        virtual void setCtr(int); 
        virtual void addAnswer(string); 
        ~Player();
    private:
        string name;
};
#endif
