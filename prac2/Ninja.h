#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
class Ninja:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif