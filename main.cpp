#include <iostream>

#include "Player.h"

#include "Human.h"

#include "Computer.h"

#include "Referee.h"


int main()

{

    Player *p1 = new Human();

    Player *comp = new Computer();

    Referee ref;

    for (int i = 0; i < 5; i++)

    {

        Player* winner = ref.refGame(p1,comp);

        if (winner)

        {

            std::cout<< winner->getName() << std::endl;

        }

        else

        {

            std::cout << "Tie" << std::endl;

        }

    }

    delete p1;

    return 0;

}


