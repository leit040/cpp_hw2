#include "HumanPlayer.h"
#include <iostream>
HumanPlayer::HumanPlayer(std::string playerName): Player(playerName)
{}
int HumanPlayer::action()
{
    int choice;
    do {
        std::cout << "Enter your move (1 - Rock, 2 - Paper, 3 - Scissors): ";
        std::cin >> choice;
    } while (choice<0 || choice>3);

    return choice;
}