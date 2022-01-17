#pragma once
#include "AmericanPowerSocket.h"
#include "EuropeanPowerSocket.h"
class EuropeanToAmericanSocketAdapter :
    public AmericanPowerSocket, public EuropeanPowerSocket
{
public:
	void connectAmericanDevice(const std::string& deviceName) {
		connectEuropeanDevice(deviceName);
	}
};

