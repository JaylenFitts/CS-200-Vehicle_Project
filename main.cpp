#include <iostream>
#include "Vehicle.h"
using namespace std;

int main(int argc, char *argv[]){
    Vehicle honda_civic = Vehicle();
    cout << honda_civic.getLevel();
    
    return 0;
}