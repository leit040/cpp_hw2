#pragma once
#include <iostream>
#include "BotPlayrer.h"
#include "HumanPlayer.h"
#include "Game.h"
void createGame()
{
    std::string playerName;
    unsigned short roundCounts;
    std::cout << "Welcome to the Game!!! "<<std::endl;
    std::cout << "Enter player name: ";
    std::cin >> playerName;
    std::cout << "Enter round counts: ";
    std::cin >> roundCounts;

    Player* first = new HumanPlayer(playerName);
    Player* second = new BotPlayer("Bot player");

    Game game = Game(first,second);
    game.gameTour(roundCounts);

    delete first;
    delete second;
}

int main()
{
createGame();
}

