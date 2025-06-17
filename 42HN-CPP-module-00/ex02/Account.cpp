/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:59:54 by mratke            #+#    #+#             */
/*   Updated: 2025/06/17 17:24:12 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "Account number: " << getNbAccounts() << '\n';
  std::cout << "Total amount: " << getTotalAmount() << '\n';
  std::cout << "Deposits: " << getNbDeposits() << '\n';
  std::cout << "Withdrawals: " << getNbWithdrawals() << '\n';
}

void Account::_displayTimestamp(void) {
  std::time_t t = std::time(0);
  std::tm *now = std::localtime(&t);
  std::cout << "[" << std::put_time(now, "%Y-%m-%d_%H:%M:%S") << "]\n";
}

