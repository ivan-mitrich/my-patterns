#pragma once
#include "IWeapon.h"
#include <iostream>
class LaserGun :
    public IWeapon
{
public:
    void fire() override {
        std::cout << "pew-pew-pew/n";
    }
    ~LaserGun() override {}
};

