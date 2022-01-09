#pragma once
#include "IUndoRedoCommand.h"
#include <stack>
class Invoker
{
private:
	IUndoRedoCommand* doCommand;
	IUndoRedoCommand* undoCommand;
	std::stack<IUndoRedoCommand*> undoStack;
	std::stack<IUndoRedoCommand*> redoStack;
	std::stack<IUndoRedoCommand*> historyStack;
public:
	Invoker() : doCommand(nullptr), undoCommand(nullptr) {}
	void setCommands(IUndoRedoCommand* doComm, IUndoRedoCommand* undoComm) {
		doCommand = doComm;
		undoCommand = undoComm;
	}
	void execute() { 
		doCommand->execute(); 
		undoStack.push(undoCommand);
		historyStack.push(doCommand);
	}
	void undo() {
		if (undoStack.empty())
			return;
		auto undoCommand = undoStack.top();
		undoStack.pop();
		undoCommand->execute();
		historyStack.push(undoCommand);
		redoStack.push(doCommand);
	}
	void redo() {
		if (redoStack.empty())
			return;
		auto redoCommand = redoStack.top();
		redoStack.pop();
		redoCommand->execute();
		historyStack.push(redoCommand);
		undoStack.push(undoCommand);
	}
	void printHistory() {
		if (historyStack.empty())
			return;
		auto stack = historyStack;
		std::cout << "------History stack:-----\n";
		while (!stack.empty())
		{
			auto command = stack.top();
			stack.pop();
			command->printName();
		}
	}
};

