#pragma once
#include "IWeapon.h"
#include <iostream>

class MachineGun :
    public IWeapon
{
public:
    void fire() override {
        std::cout << "tra-ta-ta-ta-ta/n";
    }
    ~MachineGun() override {}
};

