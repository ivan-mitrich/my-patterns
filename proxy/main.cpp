#include "LazyPlumberProxy.h"

int main() {
	std::cout << "Creating plumber proxy...\n";
	LazyPlumberProxy plumber;
	std::cout << "Calling plumber proxy doWork method...\n";
	plumber.doWork();
	std::cout << "Finish working...\n";
	return 0;
}