#pragma once
class IWorker
{
public:
	virtual void doWork() = 0;
	virtual ~IWorker() {}
};

