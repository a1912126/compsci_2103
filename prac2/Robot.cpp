#include "Robot.h"
#include "Move.h"
#include <iostream>
std::string Robot::getName()
{
    return "Robot";
}

bool Robot::win(Move *other)
{
    std::string opponent = other->getName();
    if (!opponent.compare("Ninja") || !opponent.compare("Zombie")){
        return true;
    }
    return false;
}
