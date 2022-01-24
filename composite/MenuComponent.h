#pragma once
#include "IMenu.h"
#include <vector>
#include <iostream>
#include "MenuItem.h"
#include <algorithm>
class MenuComponent :
    public IMenu
{
private:
	std::vector<IMenu*> menu;
	std::string menuName;
public:
	MenuComponent(const std::string& name) : menuName(name) {}
	std::string getName() const override {
		return menuName;
	}
	double getPrice() const override {
		double price = 0.0;
		for (const auto& item : menu) {
			price += item->getPrice();
		}
		return price;
	}
	void printMenu() const override {
		std::cout << "---------" << menuName << "---------" << "\n";
		for (const auto& item : menu) {
			item->printMenu();
		}
	}
	void addMenuItem(IMenu* item) override {
		menu.push_back(item);
	}
};

