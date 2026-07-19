//
//  Sedan.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#pragma once
#include <string>
#include "Vehicle.hpp"

class Sedan : public Vehicle {
    private:
    static const int capacity = 4;
    
    public:
    explicit Sedan(std::string vehicleNumber) : Vehicle(vehicleNumber) {}
    void getVehicleDetails() const;
    int getCapacity() const;
};
