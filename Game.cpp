#pragma once

#include <iostream>
#include "Game.h"
#include "Player.h"

Game::Game(Player *firstPlayer, Player *secondPlayer) : firstPlayer(firstPlayer),
                                                        secondPlayer(secondPlayer),
                                                        drawCount(0) {}

void Game::game() {

    unsigned short firstMove = firstPlayer->action();
    unsigned short secondMove = secondPlayer->action();

    switch (results[firstMove - 1][secondMove - 1]) {
        case 0:
            std::cout << "It's a draw!" << std::endl;
            ++drawCount;
            break;
        case +1:
            std::cout << firstPlayer->getName() << " get a win!" << std::endl;
            firstPlayer->increaseWinsCounter();
            break;
        case -1:
            std::cout << secondPlayer->getName() << "  get a win!" << std::endl;
            secondPlayer->increaseWinsCounter();
            break;
    }


}

void Game::gameTour(int countRounds) {
    for (int i = 0; i < countRounds; ++i) {
        Game::game();
    }
    std::cout << std::endl << "=======================================================" << std::endl;


    std::cout << firstPlayer->getName() << " has " << firstPlayer->getWinsCount() << " wins." << std::endl;
    std::cout << secondPlayer->getName() << " has " << secondPlayer->getWinsCount() << " wins." << std::endl;
    std::cout << drawCount << " round(s)  has a draw result." << std::endl;

}