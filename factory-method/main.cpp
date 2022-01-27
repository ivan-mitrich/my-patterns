#include "GermanyFactoryMethod.h"
#include "UkraineFactoryMethod.h"

int main() {
	GermanyFactoryMethod germany;
	UkraineFactoryMethod ukraine;
	auto ukrWorker = ukraine.createUnit(UnitTypes::WORKER);
	auto ukrCook = ukraine.createUnit(UnitTypes::COOK);
	auto gerWorker = germany.createUnit(UnitTypes::WORKER);
	auto gerCook = germany.createUnit(UnitTypes::COOK);

	ukrWorker->doWork();
	ukrCook->doWork();
	gerWorker->doWork();
	gerCook->doWork();

	delete ukrWorker;
	delete ukrCook;
	delete gerWorker;
	delete gerCook;

	return 0;
}