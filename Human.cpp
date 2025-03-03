#include "Human.h"

#include <iostream>

Human::Human():Human::Human("Human"){};

Human::Human(std::string name):Player(name,getMove()){};

char Human::getMove(){
    std::cout<<"Enter move: ";
    char move;
    std::cin>>move;
    return move;
};