#pragma once
class ICarEngine;
class ICarBody;
class ICarComponentFactory
{
public:
	virtual ICarEngine* createCarEngine() = 0;
	virtual ICarBody* createCarBody() = 0;
};

