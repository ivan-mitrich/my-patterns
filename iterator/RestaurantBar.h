#pragma once
#include <list>
#include "MenuItem.h"
#include "BarIterator.h"

class RestaurantBar 
{
private:
	std::list<MenuItem> menu;

public:
	BarIterator* createIterator() {
		return new BarIterator(menu);
	}
	void addMenuItem(MenuItem item) {
		menu.push_back(item);
	}
};

