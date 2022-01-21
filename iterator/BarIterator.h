#pragma once
#include <list>
#include "iIterator.h"
#include "MenuItem.h"
#include "BarIterator.h"
#include <iostream>

class BarIterator :
    public iIterator
{
private:
    std::list<MenuItem> menu;
    std::list<MenuItem>::const_iterator it;
public:
    BarIterator(const std::list<MenuItem>& m) : menu(m), it(menu.begin()) {}
    bool hasNext() override {
        return it != menu.end();
    }
    MenuItem next() {
        return *it++;
    }
};

