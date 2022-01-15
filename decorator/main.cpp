#include "Cheese.h"
#include "Meat.h"
#include "Sauce.h"
#include "PizzaDough.h"
#include "IPizza.h"

#include <iostream>

const std::string INGREDIENTS = "Pizza ingredients: ";

void printPizzaIngredients(const std::string& str) {
	std::cout << INGREDIENTS + str << std::endl;
}

int main() {
	IPizza* pizza = new PizzaDough;
	printPizzaIngredients(pizza->getIngredients());
	IPizza* sauce = new Sauce(pizza);
	IPizza* meat = new Meat(sauce);
	printPizzaIngredients(meat->getIngredients());
	IPizza* cheese1 = new Cheese(meat);
	IPizza* cheese2 = new Cheese(cheese1);
	printPizzaIngredients(cheese2->getIngredients());
	return 0;
}