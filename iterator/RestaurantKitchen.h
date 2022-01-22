#pragma once
#include <vector>
#include "MenuItem.h"
#include "KitchenIterator.h"
#include "IMenu.h"

class RestaurantKitchen : public IMenu
{
private:
	std::vector<MenuItem> menu;
	const std::string menuName{"-----KITCHEN MENU-----"};
public:
	iIterator* createIterator() {
		return new KitchenIterator(menu);
	}
	void addMenuItem(MenuItem item) {
		menu.push_back(item);
	}
	std::string getName() const override {
		return menuName;
	}
};

