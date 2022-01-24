#include "Waitress.h"
#include "MenuItem.h"
#include "MenuComponent.h"


void fillCocktailsSubmenu(IMenu* cocktails) {
	auto m = new MenuItem("Margarita", 100.0);
	auto s = new MenuItem("Sex on the beach", 100.0);

	cocktails->addMenuItem(m);
	cocktails->addMenuItem(s);
}

void fillBarMenu(IMenu* bar) {
	auto w = new MenuItem("Water", 10.0);
	auto t = new MenuItem("Tea", 20.0);
	auto c = new MenuItem("Coffee", 30.0);
	auto cocktails = new MenuComponent("Cocktails");

	bar->addMenuItem(w);
	bar->addMenuItem(t);
	bar->addMenuItem(c);
	bar->addMenuItem(cocktails);

	fillCocktailsSubmenu(cocktails);
}

void fillKitchenMenu(IMenu* kitchen) {
	auto b = new MenuItem("Borsch", 120.0);
	auto s = new MenuItem("Steak", 320.0);
	auto n = new MenuItem("Napoleon", 100);

	kitchen->addMenuItem(n);
	kitchen->addMenuItem(s);
	kitchen->addMenuItem(b);
}

int main() {
	IMenu* bar = new MenuComponent("Bar");
	IMenu* kitchen = new MenuComponent("Kitchen");
	fillBarMenu(bar);
	fillKitchenMenu(kitchen);
	IMenu* wholeMenu = new MenuComponent("Restaurant menu");
	wholeMenu->addMenuItem(bar);
	wholeMenu->addMenuItem(kitchen);

	Waitress waitress(wholeMenu);
	waitress.printMenu();
	waitress.printMenuSumPrice();
	return 0;
}