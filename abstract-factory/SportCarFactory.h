#pragma once
#include "ICarComponentFactory.h"
#include "SportCarEngine.h"
#include "SportCarWheels.h"

class SportCarFactory :
    public ICarComponentFactory
{
public:
	ICarEngine* createCarEngine() {
		return new SportCarEngine();
	}
	ICarWheels* createCarWheels() {
		return new SportCarWheels();
	}
	ICar4x4Transmission* createCar4x4Transmission() {
		return nullptr;
	}
};

