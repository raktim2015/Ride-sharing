//
//  vehicle.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#pragma once
#include <string>

class Vehicle {
    private:
    std::string vehicleNumber;
    
    public:
    virtual void getVehicleDetails() const = 0;
    virtual int getPassengers() const = 0;
    Vehicle() = delete;
    virtual ~Vehicle() {}
    explicit Vehicle(std::string number) : vehicleNumber(number) {}
    const std::string& getVehicleNumber() const {
        return vehicleNumber;
    }
};
