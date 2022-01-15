#pragma once
#include "PizzaTopping.h"
class Cheese :
    public PizzaTopping
{
public:
    Cheese(IPizza* pizza) : PizzaTopping::PizzaTopping(pizza) {}
    std::string getIngredients() const override final {
        return PizzaTopping::getIngredients() + ", cheese";
    }
};

