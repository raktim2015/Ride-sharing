//
//  Suv.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <iostream>
#include "Suv.hpp"

void Suv::getVehicleDetails() const {
    std::cout << "############################" << std::endl;
    std::cout << "Number : " << getVehicleNumber() << std::endl;
    std::cout << "Type : SUV " << std::endl;
    std::cout << "Max passengers : " << getCapacity() << std::endl;
    std::cout << "############################" << std::endl;
}

int Suv::getCapacity() const {
    return Suv::capacity;
}
