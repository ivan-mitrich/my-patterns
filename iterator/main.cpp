#include "Waitress.h"
#include "MenuItem.h"
#include "RestaurantBar.h"
#include "RestaurantKitchen.h"

int main() {
	RestaurantBar bar;
	bar.addMenuItem(MenuItem("Water", 20.0));
	bar.addMenuItem(MenuItem("Whiskey", 90.0));
	bar.addMenuItem(MenuItem("Tea", 40.0));
	bar.addMenuItem(MenuItem("Coffee", 50.0));

	RestaurantKitchen kitchen;
	kitchen.addMenuItem(MenuItem("Borsch", 120.0));
	kitchen.addMenuItem(MenuItem("Steak", 320.0));
	kitchen.addMenuItem(MenuItem("Napoleon", 100));

	Waitress waitress(bar.createIterator(), kitchen.createIterator());
	waitress.printMenu();
	return 0;
}