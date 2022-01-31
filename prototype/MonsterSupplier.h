#pragma once
#include "BigRedMonster.h"
#include "MiddleYellowMonster.h"
#include "SmallGreenMonster.h"
#include <unordered_map>

class MonsterSupplier
{
private:
	std::unordered_map<MonsterType, IMonster*, std::hash<MonsterType>> monsters;
public:
	MonsterSupplier() {
		monsters[MonsterType::BIG] = new BigRedMonster;
		monsters[MonsterType::MIDDLE] = new MiddleYellowMonster;
		monsters[MonsterType::SMALL] = new SmallGreenMonster;
	}
	IMonster* spawnMonster(MonsterType type) {
		return monsters[type]->clone();
	}
};

