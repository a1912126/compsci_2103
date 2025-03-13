#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include <iostream>
class Robot:public Move{
    std::string getName();
    bool win(Move*other);
};

#endif