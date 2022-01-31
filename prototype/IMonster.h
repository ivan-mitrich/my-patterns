#pragma once
enum class MonsterType
{
	BIG = 0,
	MIDDLE,
	SMALL
};

class IMonster
{
public:
	virtual IMonster* clone() = 0;
	virtual void attack() = 0;
};

