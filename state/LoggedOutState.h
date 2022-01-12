#pragma once
#include "Account.h"
#include "IState.h"
#include "LoggedInState.h"
#include "BlockedState.h"
class LoggedOutState :
    public IState
{
public:
	LoggedOutState(Account* a) : IState::IState(a) {}
	void logIn() override {
		std::cout << "Changing state to logged in from logged out\n";
		account->setNewState(new LoggedInState(account));
	}
	void logOut() override {
		std::cout << "Account has been already in logged out state\n";
	}
	void block() override {
		std::cout << "Changing state to blocked from logged out\n";
		account->setNewState(new BlockedState(account));
	}
	void printStateName() override {
		std::cout <<  "LoggedOut\n";
	}
};

