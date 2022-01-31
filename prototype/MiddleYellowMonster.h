#pragma once
#include "IMonster.h"
#include <iostream>
class MiddleYellowMonster :
    public IMonster
{
private:
	static int monsterNumber;
	int monsterIndex;
public:
	MiddleYellowMonster() {
		monsterIndex = ++MiddleYellowMonster::monsterNumber;
	}

	MiddleYellowMonster(const MiddleYellowMonster& m) {
		*this = m;
		monsterIndex = ++MiddleYellowMonster::monsterNumber;
	}

	IMonster* clone() override {
		return new MiddleYellowMonster(*this);
	}
	void attack() override {
		std::cout << "Middle yellow monster #" + std::to_string(MiddleYellowMonster::monsterIndex) + " attacks!\n";
	}
};
int MiddleYellowMonster::monsterNumber = 0;

