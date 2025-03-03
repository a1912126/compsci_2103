#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Player* p1 = new Human("Steve");
    Player* p2 = new Computer();
    
    Referee ref;
    Player* winner = ref.refGame(p1, p2);  
    
    if (winner) {  
        std::cout << "Winner: " << winner->getName() << std::endl;
    } else {
        std::cout << "No winner" << std::endl;
    }
    
    delete p1;  
    delete p2;
    return 0;
}
