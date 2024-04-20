#include "BotPlayrer.h"
#include <cstdlib>
#include <ctime>
BotPlayer::BotPlayer(std::string botName):Player(botName)
{}
int BotPlayer::action()
{
    srand(static_cast<unsigned int>(std::time(0)));
    return (rand() % 3) + 1;
}
