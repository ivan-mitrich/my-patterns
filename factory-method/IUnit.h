#pragma once
enum class UnitTypes
{
	WORKER,
	COOK
};

class IUnit
{
public:
	virtual void doWork() = 0;
};

