#pragma once
#include <string>
class IUndoRedoCommand
{
public:
	virtual void execute() = 0;
	virtual void printName() = 0;
	~IUndoRedoCommand() {}
};

