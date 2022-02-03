#pragma once
#include "ICar.h"
class Jeep :
    public ICar
{
public:
    Jeep(ICarComponentFactory* factory) : ICar(factory) {
        e = f->createCarEngine();
        t = f->createCar4x4Transmission();
        w = f->createCarWheels();
    }
    void startTheCar() {
        e->turnOn();
        t->useTransmission();
        w->rotate();
    }
};

