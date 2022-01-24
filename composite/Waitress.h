#pragma once
#include "IMenu.h"
#include <iostream>
class Waitress
{
private:
	IMenu* allMenu;
public:
	Waitress(IMenu* menu) : allMenu(menu) {}
	void printMenu() {
		allMenu->printMenu();
	}
	void printMenuSumPrice() {
		std::cout << "\nMenu sum price = " << allMenu->getPrice() << " grn.\n";
	}
};

