#pragma once
#ifndef HW2_GAME_H
#define HW2_GAME_H
#include "Player.h"
#include "BotPlayrer.h"
#include "HumanPlayer.h"
class Game
{

public:
    Game(Player* firstPlayer,Player* secondPlayer);

    void game();
    void gameTour(int countRounds);
private:
    unsigned short drawCount;
    int results[3][3] = { {0, -1, 1},
                        {1, 0, -1},
                        {-1, 1, 0} };
    Player* firstPlayer;
    Player* secondPlayer;
};



#endif //HW2_GAME_H
