#include "Soldier.h"
#include "Bazooka.h"
#include "LaserGun.h"
#include "MachineGun.h"

int main() {
	
	Soldier soldier;
	Bazooka bazooka;
	LaserGun laser;
	MachineGun machineGun;

	soldier.takeWeapon(&bazooka);
	soldier.fire();
	soldier.takeWeapon(&laser);
	soldier.fire();
	soldier.takeWeapon(&machineGun);
	soldier.fire();

	return 0;
}