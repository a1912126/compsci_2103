#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "Move.h"

int main() {
    Player* p1 = new Human("a");
    Player* p2 = new Computer();
    Player*p3 = new Human("b");
    Referee referee;
    Player* winner = referee.refGame(p1,p2);
    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }
    winner = referee.refGame(p1,p3);
    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }
    delete p1;
    delete p2;
    delete p3;
    return 0;
}