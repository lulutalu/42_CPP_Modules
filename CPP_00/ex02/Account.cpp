/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:14:29 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 17:38:47 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/*
 * Contructor / Destructor
*/

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(void)
{
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_accountIndex = getNbAccounts();
	_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->_amount;
	std::cout << ";closed" << std::endl;
}

/*
 * Getter functions
*/

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

/*
 * Display Account
*/

void	Account::_displayTimestamp(void)
{
	time_t	now = std::time(0);
	char	*time = std::ctime(&now);
	std::string	str = time;

	str.erase(24, 1);
	std::cout << "[";
	std::cout << str;
	std::cout << "]";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:";
	std::cout << getNbAccounts();
	std::cout << ";total:";
	std::cout << getTotalAmount();
	std::cout << ";deposits:";
	std::cout << getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;
}

/*
 * Action on the account
*/

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount > withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << this->_amount;
	std::cout << ";deposits:";
	std::cout << this->_nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}
