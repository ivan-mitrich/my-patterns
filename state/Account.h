#pragma once
class IState;
class Account
{
private:
	IState* state;
public:
	Account();
	void block();
	void login();
	void logout();
	void setNewState(IState* newState);
	void printCurrentStateName();
};


