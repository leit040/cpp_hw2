#pragma once
#ifndef HW2_PLAYER_H
#define HW2_PLAYER_H
#include <string>
class Player
{
private:
  std::string  name;
  unsigned short winsCount;

public:
    Player(const std::string playerName);
    virtual ~Player();
    std::string getName();
    int getWinsCount();
    void increaseWinsCounter();
    virtual int action() = 0;

};
#endif //HW2_PLAYER_H
