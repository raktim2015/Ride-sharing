//
//  Car.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <iostream>
#include "Car.hpp"

void Car::getVehicleDetails() const {
    std::cout << "Number : " << getVehicleNumber() << std::endl;
}
int Car::getPassengers() const {
    return Car::passengers;
}
