#pragma once
#include "IWorker.h"
#include "Plumber.h"
class LazyPlumberProxy :
    public IWorker
{
private:
    Plumber* plumber;
public:
    LazyPlumberProxy() : plumber(nullptr) {}
    void doWork() {
        plumber = new Plumber;
        plumber->doWork();
    }
    ~LazyPlumberProxy() {
        delete plumber;
    }
};

