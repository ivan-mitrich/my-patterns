#pragma once
#include "IObserver.h"
#include <string>

class Subscriber :
    public IObserver
{
public: 
    Subscriber(const std::string& newName);

    void update(const std::string& message) const;

private:
    std::string name;
};

