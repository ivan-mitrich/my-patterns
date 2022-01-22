#pragma once
#include "iIterator.h"
#include <string>
class IMenu
{
public:
	virtual iIterator* createIterator() = 0;
	virtual std::string getName() const = 0;
};

