#pragma once
#include "IUndoRedoCommand.h"
#include "Canvas.h"

class AdditionCommand :
    public IUndoRedoCommand
{
private:
    Canvas &canvas;
    Element* element;

public:
    AdditionCommand(Canvas& c, Element* e) : canvas(c), element(e) {}
    void execute() override { canvas.addElement(element); }
    void printName() override { std::cout << "Addition Command : adding the element " + element->getName() + "\n"; }
};

