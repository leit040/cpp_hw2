#include "Player.h"

Player::Player(const std::string playerName) : name(playerName)
{
    winsCount = 0;
}
Player::~Player(){}

std::string Player::getName()
{
    return name;
}
int Player::getWinsCount()
{
    return winsCount;
}
void Player::increaseWinsCounter()
{
    ++winsCount;
}