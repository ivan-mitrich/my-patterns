#pragma once
#include "BarIterator.h"
#include "KitchenIterator.h"
#include <iostream>
class Waitress
{
private:
	BarIterator bi;
	KitchenIterator ki;
	void printMenu(iIterator *it) {
		while (it->hasNext()) {
			auto item = it->next();
			std::cout << item.getName() << " " << item.getPrice() << " grn." <<std::endl;
		}
	}
public:
	Waitress(BarIterator b, KitchenIterator k) : bi(b), ki(k) {}
	void printMenu() {
		std::cout << "-------Bar menu:-------\n";
		printMenu(&bi);
		std::cout << "-------Kitchen menu:------\n";
		printMenu(&ki);
	}

};

