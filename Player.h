#pragma once
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
    virtual int action() const = 0;

};

