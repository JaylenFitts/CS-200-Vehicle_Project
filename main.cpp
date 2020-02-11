#include <iostream>
#include "Vehicle.h"

using namespace std;

int main(){
    Vehicle honda_civic = Vehicle();
    cout << "Honda Civic Gas Level: " << honda_civic.getGasLevel() << endl;
    cout << "Honda Civic Distance: " << honda_civic.getDistTraveled() << endl;

    honda_civic.setDistTraveled(10);

    cout << "Honda Civic Gas Level: " <<  honda_civic.getGasLevel() << endl;
    cout << "Honda Civic Distance: " <<  honda_civic.getDistTraveled() << endl;

    Vehicle nissan_sentra = Vehicle(20.0, 4.0);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel() << endl;
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled() << endl;

    nissan_sentra.fillTank(10);
    nissan_sentra.setDistTraveled(10);

    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel() << endl;
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled() << endl;

    nissan_sentra.fillTank(30);
    nissan_sentra.setDistTraveled(10);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel() << endl;
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled() << endl;
    
    nissan_sentra.setDistTraveled(100);
    cout << "Nissan Sentra Gas Level: " << nissan_sentra.getGasLevel() << endl;
    cout << "Nissan Sentra Distance: " << nissan_sentra.getDistTraveled() << endl;

    system("PAUSE");
    return 0;
}
