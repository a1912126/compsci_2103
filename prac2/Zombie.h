#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include "Move.h"
class Zombie:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif