#pragma once
#include "Account.h"
#include "IState.h"
class BlockedState :
    public IState
{
public:
	BlockedState(Account* a) : IState::IState(a) {}
	void logIn() override {
		std::cout << "Can not change state to logged IN from blocked state\n";
	}
	void logOut() override {
		std::cout << "Can not change state to logged OUT from blocked state\n";
	}
	void block() override {
		std::cout << "Account has been already in blocked state\n";
	}
	void printStateName() override {
		std::cout << "Blocked\n";
	}
};

