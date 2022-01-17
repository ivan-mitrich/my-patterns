#pragma once
#include <iostream>
class EuropeanPowerSocket
{
public:
	virtual void connectEuropeanDevice(const std::string& deviceName) {
		std::cout << deviceName + " is connected to european power socket\n";
	}
	virtual ~EuropeanPowerSocket() = default;
};

