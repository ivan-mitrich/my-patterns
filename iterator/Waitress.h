#pragma once
#include "BarIterator.h"
#include "KitchenIterator.h"
#include "IMenu.h"
#include <iostream>
class Waitress
{
private:
	std::vector<IMenu*> allMenu;
	void printMenu(iIterator *it) {
		while (it->hasNext()) {
			auto item = it->next();
			std::cout << item.getName() << " " << item.getPrice() << " grn." <<std::endl;
		}
		delete it;
	}
public:
	void printMenu() {
		for (const auto& menu : allMenu) { 
			std::cout << menu->getName() << std::endl;
			printMenu(menu->createIterator());
		}		
	}

	void addMenu(IMenu* newMenu) {
		allMenu.push_back(newMenu);
	}

};

