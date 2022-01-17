#pragma once
#include "EuropeanPowerSocket.h"
class EuropeanNotebook
{
public:
	void turnOn(EuropeanPowerSocket& eps) {
		eps.connectEuropeanDevice("european notebook");
	}
};

