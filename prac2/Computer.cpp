#include "Computer.h"
#include "Rock.h"
Computer::Computer()
{
}

Move *Computer::makeMove()
{
    return new Rock();
}

std::string Computer::getName()
{
    return "Computer";
}
