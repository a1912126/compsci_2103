#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
class Pirate:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif