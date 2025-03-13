#include "Referee.h"
#include "Move.h"
#include <iostream>
Referee::Referee()
{
}

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move*p1 = player1->makeMove();
    Move*p2 = player2->makeMove();
    if (p1->win(p2)){
        return player1;
    }
    if(p2->win(p1)){
        return player2;
    }
    return nullptr;
}
