#include "AmericanNotebook.h"
#include "EuropeanNotebook.h"
#include "AmericanPowerSocket.h"
#include "EuropeanPowerSocket.h"
#include "AmericanToEuropeanSocketAdapter.h"
#include "EuropeanToAmericanSocketAdapter.h"

int main() {
	AmericanNotebook americanNotebook;
	EuropeanNotebook europeanNotebook;
	AmericanPowerSocket americanPowerSocket;
	EuropeanPowerSocket europeanPowerSocket;
	AmericanToEuropeanSocketAdapter americanEuropeanAdapter(americanPowerSocket);
	EuropeanToAmericanSocketAdapter europeanAmericanAdapter;

	americanNotebook.turnOn(americanPowerSocket);
	europeanNotebook.turnOn(europeanPowerSocket);
	europeanNotebook.turnOn(americanEuropeanAdapter);
	americanNotebook.turnOn(europeanAmericanAdapter);
	return 0;
}