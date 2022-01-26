#pragma once
#include <string>
class IBoss
{
public:
	virtual void giveSalaryToWorkerByName(const std::string& workerName) = 0;
};

