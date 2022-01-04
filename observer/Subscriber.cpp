#include "Subscriber.h"
#include <iostream>

Subscriber::Subscriber(const std::string& newName) : name(newName)
{
}

void Subscriber::update(const std::string& message) const
{
	std::cout << "I'm " << name << std::endl;
	std::cout << "I got new magazine - " << message << std::endl;
}
