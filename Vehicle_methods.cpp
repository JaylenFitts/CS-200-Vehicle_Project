//Vehicle methods
#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(){
        this->distTraveled = 0;
        this->gasAmount = 0;
        this->gasTankSize = 10;
        this->mpg = 20;
    }

Vehicle::Vehicle(double tankSize, double mpg){
    this->distTraveled = 0;
    this->gasAmount = 0;
    this->gasTankSize = tankSize;
    this->mpg = mpg;
}

void Vehicle::fillTank(double gasAmount){
    if (this->gasAmount + gasAmount < this->gasTankSize){
        this->gasAmount += gasAmount;
    }
    else {
        cout << "Can't add that much gas\n";
    }
}

void Vehicle::setDistTraveled(double dist){
    if (this->gasAmount - (dist/this->mpg)> 0){
        this->distTraveled += dist;
        this->gasAmount -= dist/this->mpg;
    }
    else {
        cout << "Out of gas\n";
    }
}

double Vehicle::getLevel(){
    return this->gasAmount;
}