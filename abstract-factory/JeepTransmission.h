#pragma once
#include "ICar4x4Transmission.h"
#include <iostream>
class JeepTransmission :
    public ICar4x4Transmission
{
public:
    void useTransmission() {
        std::cout << "Jeep transmission is used!" << std::endl;
    }
};

