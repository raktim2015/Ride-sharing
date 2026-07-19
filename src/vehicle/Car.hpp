//
//  Car.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//
#pragma once
#include <string>
#include "Vehicle.hpp"

class Car : public Vehicle {
    private:
    static const int passengers = 4;
    
    public:
    explicit Car(std::string vehicleNumber) : Vehicle(vehicleNumber) {}
    void getVehicleDetails() const;
    int getPassengers() const;
};
