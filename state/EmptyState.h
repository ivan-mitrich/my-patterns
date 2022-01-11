#pragma once
#include "IState.h"
class EmptyState :
    public IState
{
private:
	const std::string OUT_MESSAGE{ "Empty state does nothing\n" };
	void printEmptyStateMessage() { std::cout << OUT_MESSAGE; }
public:
	EmptyState(Account* a) : IState::IState(a) {}
	void logIn() {
		printEmptyStateMessage();
	}
	void logOut() {
		printEmptyStateMessage();
	}
	void block() {
		printEmptyStateMessage();
	}
	void printStateName() {

	}
};

