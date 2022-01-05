#pragma once
#include "IWeapon.h"

class Soldier
{
public:
	Soldier() : weapon(nullptr) {}

	void takeWeapon(IWeapon* weapon) {
		dropWeapon();
		this->weapon = weapon;
	}

	void dropWeapon() {
		this->weapon = nullptr;
	}

	void fire() {
		if(this->weapon)
			this->weapon->fire();
	}

	~Soldier() { dropWeapon(); }
private:
	IWeapon* weapon;
};

