#pragma once
#include "ICarEngine.h"
#include <iostream>
class SportCarEngine :
    public ICarEngine
{
public:
    void turnOn() {
        std::cout << "Sport car engine is wraaaaarrrr!" << std::endl;
    }
};

