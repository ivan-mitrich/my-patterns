#pragma once
#include "IUnit.h"

class IUnitsFactoryMethod
{
public:
	virtual IUnit* createUnit(UnitTypes) = 0;
};

