#include "Monkey.h"
#include <iostream>
std::string Monkey::getName()
{
    return "Monkey";
}

bool Monkey::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Ninja") || !opponent.compare("Robot")){
        return true;
    }
    return false;
}
