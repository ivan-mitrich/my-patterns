#pragma once
#include "IUndoRedoCommand.h"
#include "Element.h"
class MoveCommand :
    public IUndoRedoCommand
{
private:
    Element* element;
    Position pos;
public:
    MoveCommand(Element* elem, const Position& newPosition) : element(elem), pos(newPosition) {}
    void execute() override { element->move(pos); }
    void printName() override { 
        std::cout << "Move Command to point " + std::string(pos) + " for element " + element->getName() + "\n";
    }
};

