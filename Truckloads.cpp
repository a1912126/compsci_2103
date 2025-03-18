#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if(numCrates<=loadSize){
        return 1;
    }
    return (Truckloads::numTrucks(numCrates/2,loadSize) + Truckloads::numTrucks(numCrates/2 + numCrates%2,loadSize));
}