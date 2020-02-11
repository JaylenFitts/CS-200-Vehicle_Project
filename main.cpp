#include <iostream>
#include "Vehicle.h"
using namespace std;

int main(int argc, char *argv[]){
    Vehicle honda_civic = Vehicle();
    cout << "Honda Civic Gas Level: " << honda_civic.getGasLevel();
    cout << "Honda Civic Distance: " << honda_civic.getDistTraveled();

    honda_civic.setDistTraveled(10);

    cout << "Honda Civic Gas Level: " <<  honda_civic.getGasLevel();
    cout << "Honda Civic Distance: " <<  honda_civic.getDistTraveled();

    Vehicle nissan_sentra = Vehicle(20.0, 4.0);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel();
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled();

    nissan_sentra.fillTank(10);
    nissan_sentra.setDistTraveled(10);

    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel();
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled();

    nissan_sentra.fillTank(30);
    nissan_sentra.setDistTraveled(10);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel();
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled();
    
    nissan_sentra.setDistTraveled(100);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel();
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled();

    return 0;
}
