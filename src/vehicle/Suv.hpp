//
//  Suv.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#pragma once
#include <string>
#include "Vehicle.hpp"

class Suv : public Vehicle {
    private:
    static const int capacity = 7;
    
    public:
    explicit Suv(std::string vehicleNumber) : Vehicle(vehicleNumber) {}
    void getVehicleDetails() const;
    int getCapacity() const;
};
