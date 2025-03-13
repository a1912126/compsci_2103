#include "Zombie.h"
#include "Move.h"
#include <iostream>
std::string Zombie::getName()
{
    return "Zombie";
}

bool Zombie::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Monkey") || !opponent.compare("Pirate")){
        return true;
    }
    return false;
}
