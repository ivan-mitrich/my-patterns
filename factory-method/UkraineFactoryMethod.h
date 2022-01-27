#pragma once
#include "IUnitsFactoryMethod.h"
#include "UkrainianCook.h"
#include "UkrainianWorker.h"
class UkraineFactoryMethod :
    public IUnitsFactoryMethod
{
public:
    IUnit* createUnit(UnitTypes unitType) override {
		switch (unitType)
		{
		case UnitTypes::WORKER:
			return new UkrainianWorker;
			break;
		case UnitTypes::COOK:
			return new UkrainianCook;
			break;
		default:
			return nullptr;
			break;
		}
    }
};

