//
//  VehicleMain.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <vector>
#include <iostream>

#include "Vehicle.hpp"
#include "Bike.hpp"
#include "Suv.hpp"
#include "Sedan.hpp"
#include "../utils/RandomGenerator.hpp"

class RandomGenerator;
class VehicleMain {
    public:
    static constexpr int VEHICLES = 10;
    void generateVehicles();
};

void VehicleMain::generateVehicles()
{
    std::cout << "Creating VEHICLES..... " << std::endl;
    std::vector <std::unique_ptr<Vehicle> > vehicles;
    RandomGenerator* rand_gen = RandomGenerator::getInstance();
    Vehicle* temp = nullptr;
    for(int i=0;i<VEHICLES;i++) {
        if(i&1) {
            temp = new Sedan(RandomGenerator::VehicleNumberGenerator());
            vehicles.push_back(std::unique_ptr<Vehicle>(temp));
        }
        else if(i&2) {
            temp = new Bike(RandomGenerator::VehicleNumberGenerator());
            vehicles.push_back(std::unique_ptr<Vehicle>(temp));
        }
        else {
            temp = new Suv(RandomGenerator::VehicleNumberGenerator());
            vehicles.push_back(std::unique_ptr<Vehicle>(temp));
        }
    }
    std::cout << "VEHICLES created successfully..... " << std::endl;
    for(const auto& elem : vehicles) {
        elem->getVehicleDetails();
    }
}

int main()
{
    VehicleMain obj;
    obj.generateVehicles();
    return 0;
}
