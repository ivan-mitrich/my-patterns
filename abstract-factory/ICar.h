#pragma once
#include "ICar4x4Transmission.h"
#include "ICarEngine.h"
#include "ICarWheels.h"
#include "ICarComponentFactory.h"
class ICar
{
protected:
	ICar4x4Transmission* t = nullptr;
	ICarEngine* e = nullptr;
	ICarWheels* w = nullptr;
	ICarComponentFactory* f = nullptr;

public:
	ICar(ICarComponentFactory* factory) : f(factory) {}
	virtual void startTheCar() = 0;
};

