#include "MonsterSupplier.h"
#include <vector>

int main() {
	MonsterSupplier s;
	std::vector<IMonster*> monsters;
	monsters.push_back(s.spawnMonster(MonsterType::BIG));
	monsters.push_back(s.spawnMonster(MonsterType::SMALL));
	monsters.push_back(s.spawnMonster(MonsterType::MIDDLE));
	monsters.push_back(s.spawnMonster(MonsterType::MIDDLE));
	monsters.push_back(s.spawnMonster(MonsterType::MIDDLE));
	monsters.push_back(s.spawnMonster(MonsterType::SMALL));
	monsters.push_back(s.spawnMonster(MonsterType::SMALL));

	for (auto& m : monsters)
		m->attack();

	return 0;
}