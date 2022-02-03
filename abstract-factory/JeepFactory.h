#pragma once
#include "ICarComponentFactory.h"
#include "JeepEngine.h"
#include "JeepTransmission.h"
#include "JeepWheels.h"

class JeepFactory :
    public ICarComponentFactory
{
public:
	ICarEngine* createCarEngine() {
		return new JeepEngine();
	}
	ICarWheels* createCarWheels() {
		return new JeepWheels();
	}
	ICar4x4Transmission* createCar4x4Transmission() {
		return new JeepTransmission();
	}
};

