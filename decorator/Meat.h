#pragma once
#include "PizzaTopping.h"
class Meat :
    public PizzaTopping
{
public:
    Meat(IPizza* pizza) : PizzaTopping::PizzaTopping(pizza) {}
    std::string getIngredients() const override final {
        return PizzaTopping::getIngredients() + ", meat";
    }
};

