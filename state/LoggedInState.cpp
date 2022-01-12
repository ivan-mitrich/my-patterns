#include "LoggedInState.h"
#include "LoggedOutState.h"
#include "BlockedState.h"

LoggedInState::LoggedInState(Account* a) : IState::IState(a) {}
void LoggedInState::logIn() {
	std::cout << "Account has been already in logged in state\n";
}
void LoggedInState::logOut() {
	std::cout << "Changing state to logged out from logged in\n";
	account->setNewState(new LoggedOutState(account));
}
void LoggedInState::block() {
	std::cout << "Changing state to blocked from logged in\n";
	account->setNewState(new BlockedState(account));
}
void LoggedInState::printStateName() {
	std::cout << "LoggedIn\n";
}