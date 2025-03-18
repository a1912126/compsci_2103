#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
int main(){
    Truckloads t;
    std::cout<<t.numTrucks(14,3)<<std::endl;
    std::cout<<t.numTrucks(15,1)<<std::endl;
    std::cout<<t.numTrucks(1024,5)<<std::endl;
    Reverser r;
    std::cout<<r.reverseDigit(1234)<<std::endl;
    std::cout<<r.reverseDigit(-1)<<std::endl;
    std::cout<<r.reverseString("abcd")<<std::endl;
    std::cout<<r.reverseString("")<<std::endl;
    return 0;
}