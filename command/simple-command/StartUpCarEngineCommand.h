#pragma once
#include "ISimpleCommand.h"
#include "CarEngine.h"

class StartUpCarEngineCommand :
    public ISimpleCommand
{
    CarEngine carEngine;
public:
    StartUpCarEngineCommand(const CarEngine& newCarEngine) : carEngine(newCarEngine) {}
    void execute() override { carEngine.startUp(); }
};

