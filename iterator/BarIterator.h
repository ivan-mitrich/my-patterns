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
    std::list<MenuItem>::iterator it_begin;
    std::list<MenuItem>::iterator it_end;
public:
    BarIterator(std::list<MenuItem> m) : menu(m), it_begin(menu.begin()), it_end(menu.end()) {}
    bool hasNext() override {
        return it_begin != it_end;
    }
    MenuItem next() {
        return *it_begin++;
    }
};

