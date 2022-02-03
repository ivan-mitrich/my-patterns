#include "JeepFactory.h"
#include "SportCarFactory.h"
#include "SportCar.h"
#include "Jeep.h"

int main() {
	
	JeepFactory jf;
	SportCarFactory spf;
	ICar* sportcar = new SportCar(&spf);
	ICar* jeep = new Jeep(&jf);
	sportcar->startTheCar();
	jeep->startTheCar();
	return 0;
}
