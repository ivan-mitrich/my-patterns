#pragma once
#include "IPizza.h"
class PizzaTopping :
    public IPizza
{
protected:
    IPizza* pizza;
public:
    PizzaTopping(IPizza* newPizza) : pizza(newPizza) {}
    std::string getIngredients() const override {
        return pizza->getIngredients();
    }
    virtual ~PizzaTopping() {}
};

