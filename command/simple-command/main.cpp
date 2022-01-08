#include "Driver.h"
#include "CarDoor.h"
#include "CarEngine.h"
#include "CarLights.h"
#include "OpenCarDoorCommand.h"
#include "StartUpCarEngineCommand.h"
#include "TurnOnCarLightsCommand.h"

int main() {
	Driver driver;
	
	CarDoor door;
	CarEngine engine;
	CarLights lights;
	
	OpenCarDoorCommand openDoorCommand(door);
	StartUpCarEngineCommand startUpEngineCommand(engine);
	TurnOnCarLightsCommand turnOnLightsCommand(lights);

	driver.setNewCommand(&openDoorCommand);
	driver.executeCommand();

	driver.setNewCommand(&startUpEngineCommand);
	driver.executeCommand();

	driver.setNewCommand(&turnOnLightsCommand);
	driver.executeCommand();

	return 0;
}