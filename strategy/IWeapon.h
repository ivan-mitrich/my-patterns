#pragma once
class IWeapon
{
public:
	virtual void fire() = 0;
	virtual ~IWeapon() {}
};

