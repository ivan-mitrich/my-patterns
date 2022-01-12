#include "Account.h"
#include "EmptyState.h"

Account::Account() : state(new EmptyState(this)) {}

void Account::block() {
	state->block();
}

void Account::login() {
	state->logIn();
}

void Account::logout() {
	state->logOut();
}

void Account::setNewState(IState* newState) {
	delete state;
	state = newState;
}

void Account::printCurrentStateName() {
	std::cout << "Current state : ";
	state->printStateName();
}