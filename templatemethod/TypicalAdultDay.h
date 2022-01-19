#pragma once
#include "TypicalDay.h"
class TypicalAdultDay :
    public TypicalDay
{
public:
	virtual void goToWork() override final {
		std::cout << "Worked hard for 8 hours\n";
	}
	virtual void goToBed() override final {
		std::cout << "Go to bed at 23 o'clock\n";
	}
};

