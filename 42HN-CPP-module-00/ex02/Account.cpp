/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:59:54 by mratke            #+#    #+#             */
/*   Updated: 2025/06/17 20:03:28 by mratke           ###   ########.fr       */
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

void Account::_displayTimestamp(void) {
  std::time_t t = std::time(0);
  std::tm *now = std::localtime(&t);
  std::cout << "[" << std::put_time(now, "%Y-%m-%d_%H:%M:%S") << "]\n";
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "Account number: " << getNbAccounts() << '\n';
  std::cout << "Total amount: " << getTotalAmount() << '\n';
  std::cout << "Deposits: " << getNbDeposits() << '\n';
  std::cout << "Withdrawals: " << getNbWithdrawals() << '\n';
}

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0),
      _nbWithdrawals(0) {
  _nbAccounts++;
  _totalAmount += initial_deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "created" << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
  _amount += deposit;
  _nbDeposits++;
  _totalAmount += deposit;
  _totalNbDeposits++;

  _displayTimestamp();
}

int Account::checkAmount(void) const { return _amount; }

bool Account::makeWithdrawal(int withdrawal) {

  _displayTimestamp();
  if (withdrawal > _amount) {
    std::cout << "not enough ballance\n";
    return (false);
  }

  _amount -= withdrawal;
  _nbWithdrawals++;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;
  return (true);
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << std::endl;
}
