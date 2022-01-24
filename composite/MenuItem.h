#pragma once
#include <string>
#include <stdexcept>
#include "IMenu.h"
class MenuItem : public IMenu
{
public:
	std::string getName() const override {
		return name;
	}
	double getPrice() const override {
		return price;
	}
	void printMenu() const override {
		std::cout << name << " = " << price << " grn.\n";
	}
	void addMenuItem(IMenu* item) override {
		throw std::logic_error("Adding a component to an item is forbidden!\n");
	}
	MenuItem(const std::string& n, double p) : name(n), price(p) {}
private:
	std::string name;
	double price;
};

