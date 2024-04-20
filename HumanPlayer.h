#pragma once
#ifndef HW2_HUMANPLAYER_H
#define HW2_HUMANPLAYER_H
#include "Player.h"
class HumanPlayer: public Player
{

public:
    HumanPlayer(std::string playerName);
    int action();

};


#endif //HW2_HUMANPLAYER_H
