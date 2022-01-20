#pragma once
#include <string>
class MenuItem
{
public:
	std::string getName() {
		return name;
	}
	double getPrice() {
		return price;
	}
	MenuItem(const std::string& n, double p) : name(n), price(p) {}
private:
	std::string name;
	double price;
};

