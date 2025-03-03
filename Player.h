#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
class Player{
    public:
        std::string playerName;
        char move;
        Player(std::string name, char move);
        char makeMove();
        std::string getName();
};
#endif