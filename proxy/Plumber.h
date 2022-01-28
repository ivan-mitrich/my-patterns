#pragma once
#include "IWorker.h"
#include <iostream>
class Plumber :
    public IWorker
{
public:
    Plumber() { std::cout << "A plumber was created\n"; }
    void doWork() {
        std::cout << "A plumber is repairing pipes now\n";
    }
    ~Plumber() { std::cout << "A plumber was destroyed\n"; }
};

