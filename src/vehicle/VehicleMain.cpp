//
//  VehicleMain.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include "vehicle/Vehicle.hpp"
#include "vehicle/Bike.hpp"
#include "vehicle/Car.hpp"

class VehicleMain {
    public:
    static constexpr int VEHICLES = 1000;
    void generateVehicles();
};

void VehicleMain::generateVehicles()
{
    std::vector <Vehicle*> vehicles(VEHICLES);
    for(int i=0;i<VEHICLES;i++) {
        if(i&1) {
            vehicles[i] = new Car(randomGenerator());
        }
        else {
            vehicles[i] = new Bike(randomGenerator());
        }
    }
    delete[] vehicles;
}

int main()
{
    return 0;
}
