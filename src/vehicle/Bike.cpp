//
//  Bike.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//
#include <iostream>
#include "Bike.hpp"

void Bike::getVehicleDetails() const {
    std::cout << "Number : " << getVehicleNumber() << std::endl;
}
int Bike::getPassengers() const {
    return Bike::passengers;
}
