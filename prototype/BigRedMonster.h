#pragma once
#include "IMonster.h"
#include <iostream>
#include <string>
class BigRedMonster :
    public IMonster
{
private:
	static int monsterNumber;
	int monsterIndex;
public:
	BigRedMonster() {
		monsterIndex = ++BigRedMonster::monsterNumber;
	}
	
	BigRedMonster(const BigRedMonster& m) {
		*this = m;
		monsterIndex = ++BigRedMonster::monsterNumber;	
	}
	
	IMonster* clone() override {
		return new BigRedMonster(*this);
	}
	void attack() override {
		std::cout << "Big red monster #" + std::to_string(monsterIndex) + " attacks!\n";
	}
};

int BigRedMonster::monsterNumber = 0;
