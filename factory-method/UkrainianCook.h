#pragma once
#include "IUnit.h"
#include <iostream>
class UkrainianCook :
    public IUnit
{
public:
    void doWork() override {
        std::cout << "Ukrainian cook is cooking borsch now\n";
    }
};

