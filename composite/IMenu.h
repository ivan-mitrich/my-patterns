#pragma once
#include <string>
class IMenu
{
public:
	virtual std::string getName() const = 0;
	virtual void printMenu() const = 0;
	virtual double getPrice() const = 0;
	virtual void addMenuItem(IMenu* item) = 0;
};

