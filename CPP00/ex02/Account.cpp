/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/11 15:18:12 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/12 16:31:18 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) { return (_nbAccounts); }
int Account::getTotalAmount( void ) { return (_totalAmount); }
int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts \
				<< ";total:" << _totalAmount \
				<< ";deposits:" << _totalNbDeposits \
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _totalAmount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void	Account::makeDeposit( int deposit ) {
	int p_amount = _amount;

	_displayTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout	<< " index:" << _accountIndex \
				<< ";p_amount:" << p_amount \
				<< ";deposit:" << deposit \
				<< ";amount:" << _amount \
				<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex \
				<< ";p_amount:" << _amount \
				<< ";withdrawal:";
	if (_amount < withdrawal) {
		std::cout	<< "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout	<< withdrawal \
				<< ";amount:" << _amount \
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const { return (_amount); }

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex \
				<< ";amount:" << _amount \
				<< ";deposits:" << _nbDeposits \
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

 void Account::_displayTimestamp( void ) {
	std::time_t time = std::time(NULL);

	struct tm *localTime = std::localtime(&time);
	char buffer[80];
  	strftime(buffer, 80, "[%Y%m%d_%H%M%S]", localTime);
	std::cout << buffer;
	// std::cout << "[19920104_091532]";
 }
 