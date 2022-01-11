#pragma once
#include "IState.h"
#include "EmptyState.h"
class Account
{
private:
	IState* state;
public:
	Account() : state(new EmptyState(this)) {}
	void block() {
		state->block();
	}
	void login() {
		state->logIn();
	}
	void logout() {
		state->logOut();
	}
	void setNewState(IState* newState) {
		delete state;
		state = newState;
	}
};

