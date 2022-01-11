#pragma once
#include "IState.h"
class BlockedState :
    public IState
{
public:
	BlockedState(Account* a) : IState::IState(a) {}
	void logIn() {
		std::cout << "Can not change state to logged IN from blocked state\n";
	}
	void logOut() {
		std::cout << "Can not change state to logged OUT from blocked state\n";
	}
	void block() {
		std::cout << "Account has been already in blocked state\n";
	}
	void printStateName() {
	
	}
};

