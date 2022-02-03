#pragma once
#include "ICarWheels.h"
#include <iostream>
class JeepWheels :
    public ICarWheels
{
public:
    void rotate() {
        std::cout << "Jeep is going!" << std::endl;
    }
};

