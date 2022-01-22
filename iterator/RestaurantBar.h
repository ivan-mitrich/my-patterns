#pragma once
#include <list>
#include "MenuItem.h"
#include "BarIterator.h"
#include "IMenu.h"

class RestaurantBar : public IMenu 
{
private:
	std::list<MenuItem> menu;
	const std::string menuName{ "-------BAR MENU-------"};
public:
	iIterator* createIterator() override {
		return new BarIterator(menu);
	}
	void addMenuItem(MenuItem item) {
		menu.push_back(item);
	}
	std::string getName() const override {
		return menuName;
	}
};

