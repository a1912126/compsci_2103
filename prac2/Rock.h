#ifndef ROCK_H
#define ROCK_H
#include <iostream>
#include "Move.h"
class Rock:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif