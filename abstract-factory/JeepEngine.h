#pragma once
#include "ICarEngine.h"
#include <iostream>
class JeepEngine :
    public ICarEngine
{
public:
    void turnOn() {
        std::cout << "Jeep engine is unstoppable!" << std::endl;
    }
};

