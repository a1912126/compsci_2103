#include "Rock.h"
#include "Move.h"
#include <iostream>
std::string Rock::getName()
{
    return "Rock";
}

bool Rock::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Scissors")){
        return true;
    }
    return false;
}
