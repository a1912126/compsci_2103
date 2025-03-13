#include "Ninja.h"
#include "Move.h"
#include <iostream>
std::string Ninja::getName()
{
    return "Ninja";
}

bool Ninja::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Zombie") || !opponent.compare("Pirate")){
        return true;
    }
    return false;
}
