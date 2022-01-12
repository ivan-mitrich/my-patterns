#pragma once
#include "Account.h"
#include "IState.h"
#include "LoggedInState.h"
#include "LoggedOutState.h"
#include "BlockedState.h"
class EmptyState :
    public IState
{
public:
	EmptyState(Account* a) : IState::IState(a) {}
	void logIn() override {
		std::cout << "Changing state to logged in from empty\n";
		account->setNewState(new LoggedInState(account));
	}
	void logOut() override {
		std::cout << "Changing state to logged out from empty\n";
		account->setNewState(new LoggedOutState(account));
	}
	void block() override {
		std::cout << "Changing state to blocked from empty\n";
		account->setNewState(new BlockedState(account));
	}
	void printStateName() override {
		std::cout << "Empty\n";
	}
};

