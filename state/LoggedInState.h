#pragma once
#include "Account.h"
#include "IState.h"
#include "BlockedState.h"

class LoggedOutSate;
class LoggedInState :
	public IState
{
public:
	LoggedInState(Account* a);
	void logIn() override;
	void logOut() override;
	void block() override;
	void printStateName() override;
};
