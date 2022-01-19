#include "TypicalAdultDay.h"
#include "TypicalStudentDay.h"

int main() {
	TypicalAdultDay adultDay;
	TypicalStudentDay studentDay;
	std::cout << "-------a typical day for an adult--------\n";
	adultDay.spendTypicalDay();
	std::cout << "-------a typical day for a student--------\n";
	studentDay.spendTypicalDay();
	return 0;
}