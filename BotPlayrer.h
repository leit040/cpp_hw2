#pragma once
#include <string>
#include "Player.h"

class BotPlayer: public Player
{
public:
    BotPlayer(std::string botName);
    int action() const;
};









