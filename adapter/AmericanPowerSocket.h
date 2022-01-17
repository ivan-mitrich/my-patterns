#pragma once
#include <iostream>
class AmericanPowerSocket
{
public:
	virtual void connectAmericanDevice(const std::string& deviceName) {
		std::cout << deviceName + " is connected to american power socket\n";
	}
	virtual ~AmericanPowerSocket() = default;
};

