#include "Player.h"

Player::Player(std::string name,char move):playerName(name),move(move){
}
char Player::makeMove(){
    return move;
};

std::string Player::getName(){
    return playerName;
};