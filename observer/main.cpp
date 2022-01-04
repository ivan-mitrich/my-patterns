#include "Publisher.h"
#include "Subscriber.h"

int main() {
	Subscriber pasha("Pasha");
	Subscriber sveta("Sveta");
	Subscriber olya("Olya");
	Publisher springer;
	springer.attach(&pasha);
	springer.attach(&sveta);
	springer.attach(&olya);
	springer.publishNewMagazine("Igromania");

	springer.detach(&sveta);
	springer.publishNewMagazine("Football");
	return 0;
}