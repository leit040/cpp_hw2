#pragma once
#include "Player.h"
class HumanPlayer: public Player
{

public:
    HumanPlayer(std::string playerName);
    int action() const;

};


