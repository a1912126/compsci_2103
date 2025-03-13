#include "Scissors.h"
#include "Move.h"
#include <iostream>
std::string Scissors::getName()
{
    return "Scissors";
}

bool Scissors::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Paper")){
        return true;
    }
    return false;
}
