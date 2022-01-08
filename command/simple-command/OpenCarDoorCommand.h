#pragma once
#include "ISimpleCommand.h"
#include "CarDoor.h"

class OpenCarDoorCommand :
    public ISimpleCommand
{
    CarDoor carDoor;
public:
    OpenCarDoorCommand(const CarDoor& newCarDoor) : carDoor(newCarDoor) {}
    void execute() override { carDoor.open(); }
};

