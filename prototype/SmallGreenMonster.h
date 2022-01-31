#pragma once
#include "IMonster.h"
#include <iostream>

class SmallGreenMonster :
    public IMonster
{
private:
	static int monsterNumber;
	int monsterIndex;
public:
	SmallGreenMonster() {
		monsterIndex = ++SmallGreenMonster::monsterNumber;
	}

	SmallGreenMonster(const SmallGreenMonster& m) {
		*this = m;
		monsterIndex = ++SmallGreenMonster::monsterNumber;
	}

	IMonster* clone() override {
		return new SmallGreenMonster(*this);
	}
	void attack() override {
		std::cout << "Small green monster #" + std::to_string(monsterIndex) + " attacks!\n";
	}
};

int SmallGreenMonster::monsterNumber = 0;

