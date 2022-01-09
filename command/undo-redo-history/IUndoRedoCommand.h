#pragma once
class IUndoRedoCommand
{
public:
	virtual void execute() = 0;
	virtual void undo() = 0;
	~IUndoRedoCommand() {}
};

