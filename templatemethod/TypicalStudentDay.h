#pragma once
#include "TypicalDay.h"
class TypicalStudentDay :
    public TypicalDay
{
public:
	virtual void goToWork() override final {
		std::cout << "Waste time in university\n";
	}
	virtual void goToBed() override final {
		std::cout << "Did not go to bed at all\n";
	}
	virtual void spendFreeTime() override final {
		std::cout << "Chilling and hanging out in the club\n";
	}
};

