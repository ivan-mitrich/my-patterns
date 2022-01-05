#pragma once
#include "IWeapon.h"
#include <iostream>

class Bazooka :
    public IWeapon
{
public:
    void fire() override {
        std::cout << "KABOOM!\n";
    }
    ~Bazooka() override {}
};

