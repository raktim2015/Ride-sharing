//
//  Sedan.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <iostream>
#include "Sedan.hpp"

void Sedan::getVehicleDetails() const {
    std::cout << "############################" << std::endl;
    std::cout << "Number : " << getVehicleNumber() << std::endl;
    std::cout << "Type : Sedan " << std::endl;
    std::cout << "Max passengers : " << getCapacity() << std::endl;
    std::cout << "############################" << std::endl;
}

int Sedan::getCapacity() const {
    return Sedan::capacity;
}
