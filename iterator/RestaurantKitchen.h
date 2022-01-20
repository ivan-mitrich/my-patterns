#pragma once
#include <vector>
#include "MenuItem.h"
#include "KitchenIterator.h"
class RestaurantKitchen
{
private:
	std::vector<MenuItem> menu;

public:
	KitchenIterator createIterator() {
		return KitchenIterator(menu);
	}
	void addMenuItem(MenuItem item) {
		menu.push_back(item);
	}
};

