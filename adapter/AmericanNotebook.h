#pragma once
#include "AmericanPowerSocket.h"
class AmericanNotebook
{
public:
	void turnOn(AmericanPowerSocket& aps) {
		aps.connectAmericanDevice("american notebook");
	}
};

