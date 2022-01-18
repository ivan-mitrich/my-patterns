#pragma once
#include <iostream>
class PowerSocket
{
public:
	void plugIn() {
		std::cout << "device was plugged into power soket\n";
	}
	void plugOut() {
		std::cout << "device was plugged out from power socket\n";
	}
};

