#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include "Player.h"
#include "Move.h"
class Human: public Player{
    private:
        std::string playerName;
    public:
        Human();
        Human(std::string name);
        Move* makeMove();
        std::string getName();
};
#endif