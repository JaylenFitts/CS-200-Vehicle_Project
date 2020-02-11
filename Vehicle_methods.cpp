//Vehicle methods
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle :: Vehicle(){
    this->distTraveled = 0;
    this->gasAmount = 0;
    this->gasTankSize = 10;
    this->mpg = 20;
}

Vehicle :: Vehicle(double size, double mpg){
    this->distTraveled = 0;
    this->gasAmount = 0;
    this->gasTankSize = size;
    mpg = mpg;
}

void Vehicle :: fillTank(double gasAmount){
    if (this->gasAmount + gasAmount < this->gasTankSize){
        this->gasAmount += gasAmount;
    }
    else {
        this->gasAmount = this->gasTankSize;
        cout << "Can't add that much gas, filling to top\n";
    }
}

void Vehicle :: setDistTraveled(double dist){
    if (this->gasAmount - (dist/this->mpg)> 0){
        this->distTraveled += dist;
        this->gasAmount -= dist/this->mpg;
    }
    else {
        cout << "Out of gas\n";
    }
}

double Vehicle :: getGasLevel(){
    return this->gasAmount;
}

double Vehicle :: getDistTraveled(){
    return this->distTraveled;
}
