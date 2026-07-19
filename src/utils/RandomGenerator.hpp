//
//  RandomGenerator.hpp
//  
//
//  Created by RAKTIM MALAKAR on 19/07/26.
//

#pragma once
class RandomGenerator {
    private:
    static const std::string digits;
    static const std::string alphabets;
    static RandomGenerator* instance;
    
    // private constructor
    explicit RandomGenerator() {}
    
    public:
    static RandomGenerator* getInstance() {
        if(instance == nullptr) {
            instance = new RandomGenerator();
        }
        return instance;
    }
    
    // disable copy constructor
    RandomGenerator(const RandomGenerator&) = delete;
    // disable copy assignment operator
    RandomGenerator& operator=(const RandomGenerator&) = delete;
    static std::string VehicleNumberGenerator();
};
