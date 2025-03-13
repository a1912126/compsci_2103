#ifndef PAPER_H
#define PAPER_H
#include <iostream>
#include "Move.h"
class Paper:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif