#pragma once
#include "PizzaTopping.h"
class Sauce :
    public PizzaTopping
{
public:
    Sauce(IPizza* pizza) : PizzaTopping::PizzaTopping(pizza) {}
    std::string getIngredients() const override final {
        return PizzaTopping::getIngredients() + ", sauce";
    }
};

