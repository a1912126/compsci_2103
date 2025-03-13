#ifndef SCISSORS_H
#define SCISSORS_H
#include <iostream>
#include "Move.h"
class Scissors:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif