#include "Publisher.h"
#include "IObserver.h"
#include <iostream>


void Publisher::attach(IObserver* observer)
{
	subscribers.push_back(observer);
}

void Publisher::detach(IObserver* observer)
{
	subscribers.remove(observer);
}

void Publisher::notify() const
{
	for (auto &subscriber : subscribers)
		subscriber->update(magazineName);
}

void Publisher::publishNewMagazine(const std::string& newMagazineName)
{
	magazineName = newMagazineName;
	std::cout << "Publish new magazine: " << magazineName << std::endl;
	notify();
}
