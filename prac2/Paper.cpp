#include "Paper.h"
#include "Move.h"
#include <iostream>
std::string Paper::getName()
{
    return "Paper";
}

bool Paper::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Rock")) {
        return true;
    }
    return false;
}
