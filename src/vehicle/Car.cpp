//
//  Car.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <iostream>
#include "Car.hpp"

void Car::getVehicleDetails() const {
    std::cout << "############################" << std::endl;
    std::cout << "Number : " << getVehicleNumber() << std::endl;
    std::cout << "Type : Car " << std::endl;
    std::cout << "Max passengers : " << getPassengers() << std::endl;
    std::cout << "############################" << std::endl;
}

int Car::getPassengers() const {
    return Car::passengers;
}
