#ifndef MOVE_H
#define MOVE_H
#include <iostream>
class Move{
    public:
        virtual std::string getName()=0;
        virtual bool win(Move* other) =0;
};

#endif