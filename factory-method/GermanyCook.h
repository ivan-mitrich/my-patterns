#pragma once
#include "IUnit.h"
#include <iostream>
class GermanyCook :
    public IUnit
{
public:
    void doWork() override {
        std::cout << "German cook is stewing cabbage with sausages now\n";
    }
};

