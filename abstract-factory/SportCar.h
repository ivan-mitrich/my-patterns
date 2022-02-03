#pragma once
#include "ICar.h"
class SportCar :
    public ICar
{
public:
    SportCar(ICarComponentFactory* factory) : ICar(factory) {
        e = f->createCarEngine();
        w = f->createCarWheels();
    }
    void startTheCar() {
        e->turnOn();
        w->rotate();
    }
};

