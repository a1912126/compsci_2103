#ifndef HUMAN_H

#define HUMAN_H


#include <iostream>

#include "Player.h"

class Human: public Player{

    private: 

        std::string playerName;

    public:

        Human();

        Human(std::string name);

        char makeMove();

        std::string getName();


};

#endif