#ifndef HW2_BOTPLAYRER_H
#define HW2_BOTPLAYRER_H
#pragma once
#include <string>
#include "Player.h"

class BotPlayer: public Player
{
public:
    BotPlayer(std::string botName);
    int action();
};








#endif //HW2_BOTPLAYRER_H
