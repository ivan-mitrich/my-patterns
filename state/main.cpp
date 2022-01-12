#include "Account.h"

int main()
{
	Account account;
	account.printCurrentStateName();
	account.login();
	account.printCurrentStateName();
	account.logout();
	account.printCurrentStateName();
	account.logout();
	account.printCurrentStateName();
	account.block();
	account.printCurrentStateName();
	account.login();
	account.printCurrentStateName();
}