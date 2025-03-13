#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Human::Human():Human::Human("Human"){};

Human::Human(std::string name):playerName(name){};

Move *Human::makeMove()
{
    std::string moveName;
    std::cout << "Enter Move: ";
    std::cin >> moveName;

    if (!moveName.compare("Rock")) return new Rock();
    if (!moveName.compare("Paper")) return new Paper();
    if (!moveName.compare("Scissors")) return new Scissors();
    if (!moveName.compare("Robot")) return new Robot();
    if (!moveName.compare("Monkey")) return new Monkey();
    if (!moveName.compare("Pirate")) return new Pirate();
    if (!moveName.compare("Ninja")) return new Ninja();
    if (!moveName.compare("Zombie")) return new Zombie();

    return nullptr;  
}

std::string Human::getName()
{
    return playerName;
}
