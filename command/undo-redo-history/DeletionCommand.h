#pragma once
#include "IUndoRedoCommand.h"
#include "Canvas.h"

class DeletionCommand :
    public IUndoRedoCommand
{
private:
    Canvas& canvas;
    Element* element;

public:
    DeletionCommand(Canvas& c, Element* e) : canvas(c), element(e) {}
    void execute() override { canvas.removeElement(element); }
    void printName() override { std::cout << "Deletion Command : deleting the element " + element->getName() + "\n"; }
};

