#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account()
{

}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts 
				<< "total:" << _totalAmount
				<< "deposits:" << getNbDeposits()
				<< "withdrawals:" << getNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawl)
{
	int p_amount;
	if (_amount < withdrawl)
	{
		std::cout << "index:" << _accountIndex
					<< "p_amount:" << _amount
					<< "withdrawal:refused" << std::endl;
		return (false);
	}
	p_amount = _amount;
	_amount -= withdrawl;
	std::cout << "index:" << _accountIndex
				<< "p_amount:" << p_amount
				<< "withdrawal:" << withdrawl

	
}

