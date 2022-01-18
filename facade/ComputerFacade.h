#pragma once
#include "Loudspeakers.h"
#include "Monitor.h"
#include "PowerSocket.h"

class ComputerFacade
{
private:
	Monitor monitor;
	Loudspeakers loudspeakers;
	PowerSocket socket;
public:
	ComputerFacade(Monitor m, Loudspeakers l, PowerSocket ps) : monitor(m), loudspeakers(l), socket(ps) {} 
	void turnOn() {
		socket.plugIn();
		monitor.turnOnMonitor();
		loudspeakers.turnOnLoudspeaker();
	}
	void turnOff() {
		loudspeakers.turnOffLoudspeaker();
		monitor.turnOffMonitor();
		socket.plugOut();	
	}
};

