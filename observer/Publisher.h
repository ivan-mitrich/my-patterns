#pragma once
#include "ISubject.h"

#include <list>
#include <string>

class Publisher :
    public ISubject
{
public:
    void attach(IObserver* observer);
    void detach(IObserver* observer);
    void notify() const;

    void publishNewMagazine(const std::string& newMagazineName);
    
private:
    std::list<IObserver*> subscribers;
    std::string magazineName;
};

