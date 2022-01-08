#pragma once
#include "ISimpleCommand.h"
#include "CarLights.h"

class TurnOnCarLightsCommand :
    public ISimpleCommand
{
    CarLights carLights;
public:
    TurnOnCarLightsCommand(const CarLights& lights) : carLights(lights) {}
    void execute() override { carLights.turnOnLights(); }
};

