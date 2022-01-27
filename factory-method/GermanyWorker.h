#pragma once
#include "IUnit.h"
#include <iostream>
class GermanyWorker :
    public IUnit
{
public:
    void doWork() override {
        std::cout << "German worker came to work at 8:00 and back home at 18:00\n";
    }
};

