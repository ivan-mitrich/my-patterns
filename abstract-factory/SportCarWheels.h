#pragma once
#include "ICarWheels.h"
#include <iostream>
class SportCarWheels :
    public ICarWheels
{
public:
    void rotate() {
        std::cout << "Sport car is going like a lightning!" << std::endl;
    }
};

