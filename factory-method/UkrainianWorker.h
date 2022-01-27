#pragma once
#include "IUnit.h"
#include <iostream>
class UkrainianWorker :
    public IUnit
{
public:
    void doWork() override {
        std::cout << "Ukrainian worker came to work at 10:38 and back home at 15:07\n";
    }
};

