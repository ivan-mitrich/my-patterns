#include "Monitor.h"
#include "ComputerFacade.h"
#include "Loudspeakers.h"
#include "PowerSocket.h"

int main() {
	Monitor m;
	Loudspeakers l;
	PowerSocket ps;
	ComputerFacade comp(m, l, ps);
	comp.turnOn();
	comp.turnOff();
	return 0;
}