#include "Player.h"

void Player::reset() {}

char Player::getMove() const
{
    return Player::choice;
}
void Player::changeChoice(char move)
{
    choice = move;
}