#pragma once
#include "IUnitsFactoryMethod.h"
#include "GermanyCook.h"
#include "GermanyWorker.h"
class GermanyFactoryMethod :
    public IUnitsFactoryMethod
{
public:
    IUnit* createUnit(UnitTypes unitType) override {
		switch (unitType)
		{
		case UnitTypes::WORKER:
			return new GermanyWorker;
			break;
		case UnitTypes::COOK:
			return new GermanyCook;
			break;
		default:
			return nullptr;
			break;
		}
    }
};

