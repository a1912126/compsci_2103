#include "Pirate.h"
#include "Move.h"
#include <iostream>
std::string Pirate::getName()
{
    return "Pirate";
}

bool Pirate::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Robot") || !opponent.compare("Monkey")){
        return true;
    }
    return false;
}
