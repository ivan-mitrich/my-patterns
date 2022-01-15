#pragma once
#include "IPizza.h"
class PizzaDough :
    public IPizza
{
public:
    std::string getIngredients() const override final {
        return "dough";
    }
};

