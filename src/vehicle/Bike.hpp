//
//  Bike.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#pragma once
#include <string>
#include "Vehicle.hpp"

class Bike : public Vehicle {
    private:
    static const int passengers = 2;
    
    public:
    explicit Bike(std::string vehicleNumber) : Vehicle(vehicleNumber) {}
    void getVehicleDetails() const;
    int getPassengers() const;
};
