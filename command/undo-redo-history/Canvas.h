#pragma once
#include <list>
#include <iostream>
#include "Element.h"

class Canvas
{
private:
	std::list<Element*> elements;
public:
	void addElement(Element* elem) {
		elements.push_back(elem);
		std::cout << "Added element: " << elem->getName() << "\n";
	}
	void removeElement(Element* elem) {
		elements.remove(elem);
		std::cout << "Remove element: " << elem->getName() << "\n";
	}
};

