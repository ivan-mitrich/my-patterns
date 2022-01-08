#pragma once
#include "ISimpleCommand.h"

class Driver
{
private:
	ISimpleCommand* simpleCommand;
public:
	Driver() : simpleCommand(nullptr) {};
	void setNewCommand(ISimpleCommand* newSimpleCommand) { simpleCommand = newSimpleCommand; }
	void executeCommand() { if(simpleCommand) simpleCommand->execute();  }	
	~Driver() { simpleCommand = nullptr; }
};

