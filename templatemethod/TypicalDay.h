#pragma once
#include <iostream>
class TypicalDay
{
public:
	void wakeUp() {
		std::cout << "Wake up at 7 o'clock\n";
	}
	virtual void goToWork() = 0;
	virtual void goToBed() = 0;
	virtual void spendFreeTime() {
		std::cout << "rest is for the weak!\n";
	}
	void spendTypicalDay() {
		wakeUp();
		goToWork();
		spendFreeTime();
		goToBed();
	}
};

