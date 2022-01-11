#pragma once
#include "Account.h"
#include <iostream>
class IState
{
protected:
	Account* account;
public:
	IState(Account* a) : account(a) {}
	virtual void logIn() = 0;
	virtual void logOut() = 0;
	virtual void block() = 0;
	virtual void printStateName() = 0;
	virtual ~IState() {}
};

