//
//  Bike.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//
#include <iostream>
#include "Bike.hpp"

void Bike::getVehicleDetails() const {
    std::cout << "############################" << std::endl;
    std::cout << "Number : " << getVehicleNumber() << std::endl;
    std::cout << "Type : Bike " << std::endl;
    std::cout << "Max passengers : " << getPassengers() << std::endl;
    std::cout << "############################" << std::endl;
}
int Bike::getPassengers() const {
    return Bike::passengers;
}
