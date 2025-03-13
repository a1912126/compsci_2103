#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
class Monkey:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif