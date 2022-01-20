#pragma once
#include "iIterator.h"
#include "MenuItem.h"
#include <vector>
class KitchenIterator :
    public iIterator
{
private:
    std::vector<MenuItem>::size_type position;
    std::vector<MenuItem> menu;
public:
    KitchenIterator(const std::vector<MenuItem>& m) : menu(m), position(0) { }
    bool hasNext() override {
        return position < menu.size();
    }
    MenuItem next() {
        return menu[position++];
    }
};

