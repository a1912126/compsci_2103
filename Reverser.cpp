#include "Reverser.h"
#include "math.h"
#include "string.h"
int Reverser::reverseDigit(int value)
{
    if (value<0){
        return -1;
    };
    if (value<10){
        return value;
    }
    int power = 1;
    while (power*10<=value){
        power*=10;
    }
    return (value%10)*power+ Reverser::reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string characters)
{
    if (characters.empty()) {
        return "ERROR"; 
    }
    int n =characters.length();
    if (n == 1){
        return characters;
    }
    return characters[n-1] + Reverser::reverseString(characters.substr(0,n-1));
}
