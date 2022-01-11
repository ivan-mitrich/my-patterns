#pragma once
#include "IState.h"
#include "LoggedOutState.h"
#include "BlockedState.h"

class LoggedInState :
    public IState
{
public:
	LoggedInState(Account* a) : IState::IState(a) {}
	void logIn() {
		std::cout << "Account has been already in logged in state\n";
	}
	void logOut() {
		std::cout << "Changing state to logged out from logged in\n";
		account->setNewState(new LoggedOutState(account));
	}
	void block() {
		std::cout << "Changing state to blocked from logged in\n";
		account->setNewState(new BlockedState(account));
	}
	void printStateName() {

	}
};

