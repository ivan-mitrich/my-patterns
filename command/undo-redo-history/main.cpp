#include "Canvas.h"
#include "Element.h"
#include "AdditionCommand.h"
#include "DeletionCommand.h"
#include "MoveCommand.h"
#include "Invoker.h"

int main() {
	Canvas canvas;
	Element circle("circle");
	Element quad("quad");
	Element triangle("triangle");
	
	//do "creation" commands
	AdditionCommand circleAddition(canvas, &circle);
	AdditionCommand quadAddition(canvas, &quad);
	AdditionCommand triangleAddition(canvas, &triangle);	
	//undo "creation" commands
	DeletionCommand circleDeletion(canvas, &circle);
	DeletionCommand quadDeletion(canvas, &quad);
	DeletionCommand triangleDeletion(canvas, &triangle);

	//do "move" commands
	MoveCommand moveCircle(&circle, Position(10, 10));
	MoveCommand moveTriangle(&quad, Position(-5, 13));
	//undo "move" commands
	MoveCommand moveCircleBack(&circle, Position(-10, -10));
	MoveCommand moveTriangleBack(&quad, Position(5, -13));

	Invoker invoker;
	invoker.setCommands(&circleAddition, &circleDeletion);
	invoker.execute();
	invoker.setCommands(&quadAddition, &quadDeletion);
	invoker.execute();
	invoker.undo();
	invoker.redo();
	invoker.setCommands(&triangleAddition, &triangleDeletion);
	invoker.execute();
	canvas.printElements();
	invoker.undo();
	canvas.printElements();

	invoker.setCommands(&moveCircle, &moveCircleBack);
	invoker.execute();
	invoker.undo();
	invoker.redo();
	invoker.setCommands(&moveTriangle, &moveTriangleBack);
	invoker.execute();
	invoker.undo();

	invoker.printHistory();

	return 0;
}