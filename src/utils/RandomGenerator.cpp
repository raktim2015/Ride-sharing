//
//  RandomGenerator.cpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#include <random>
#include <string>
#include <iostream>
#include "RandomGenerator.hpp"

const std::string RandomGenerator::digits = "0123456789";
const std::string RandomGenerator::alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
RandomGenerator* RandomGenerator::instance = nullptr;

std::string RandomGenerator::VehicleNumberGenerator()
{
    // format example KA 02 JY 1201
    static constexpr int LENGTH = 10;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<std::size_t> g_alphanumeric(0, RandomGenerator::alphabets.size()-1);
    std::uniform_int_distribution<std::size_t> g_digits(0, RandomGenerator::digits.size()-1);
    
    std::string vehicle_no;
    for(std::size_t i=0;i<2;i++) {
        vehicle_no.push_back(RandomGenerator::alphabets[g_alphanumeric(generator)]);
    }
    for(std::size_t i=2;i<4;i++) {
        vehicle_no.push_back(RandomGenerator::digits[g_digits(generator)]);
    }
    for(std::size_t i=4;i<6;i++) {
        vehicle_no.push_back(RandomGenerator::alphabets[g_alphanumeric(generator)]);
    }
    for(std::size_t i=6;i<10;i++) {
        vehicle_no.push_back(RandomGenerator::digits[g_digits(generator)]);
    }
    return vehicle_no;
}
