#pragma once
class ICarEngine;
class ICarWheels;
class ICar4x4Transmission;
class ICarComponentFactory
{
public:
	virtual ICarEngine* createCarEngine() = 0;
	virtual ICarWheels* createCarWheels() = 0;
	virtual ICar4x4Transmission* createCar4x4Transmission() = 0;
};

