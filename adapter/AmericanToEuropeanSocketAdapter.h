#pragma once
#include "AmericanPowerSocket.h"
#include "EuropeanPowerSocket.h"
class AmericanToEuropeanSocketAdapter : public EuropeanPowerSocket
{
private:
	AmericanPowerSocket powerSocket;
public:
	AmericanToEuropeanSocketAdapter(AmericanPowerSocket aps) : powerSocket(aps) {}
	void connectEuropeanDevice(const std::string& deviceName) {
		powerSocket.connectAmericanDevice(deviceName);
	}
};

