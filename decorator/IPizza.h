#pragma once
#include <string>
class IPizza
{
public:
	virtual std::string getIngredients() const = 0;
	virtual ~IPizza() {}
};

