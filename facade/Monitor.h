#pragma once
#include <iostream>
class Monitor
{
public:
	void turnOnMonitor() {
		std::cout << "monitor was turned on\n";
	}
	void turnOffMonitor() {
		std::cout << "monitor was turned off\n";
	}
};

