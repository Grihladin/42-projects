/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 23:59:54 by mratke            #+#    #+#             */
/*   Updated: 2025/06/17 20:22:52 by mratke           ###   ########.fr       */
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
  std::cout << "[" << (now->tm_year + 1900) << std::setfill('0') << std::setw(2)
            << (now->tm_mon + 1) << std::setfill('0') << std::setw(2)
            << now->tm_mday << "_" << std::setfill('0') << std::setw(2)
            << now->tm_hour << std::setfill('0') << std::setw(2) << now->tm_min
            << std::setfill('0') << std::setw(2) << now->tm_sec << "] ";
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";"
            << "total:" << _totalAmount << ";"
            << "deposits:" << _totalNbDeposits << ";"
            << "withdrawals:" << _totalNbWithdrawals << std::endl;
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
  int p_amount = _amount;
  _amount += deposit;
  _nbDeposits++;
  _totalAmount += deposit;
  _totalNbDeposits++;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << p_amount << ";"
            << "deposit:" << deposit << ";"
            << "amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << std::endl;
}

int Account::checkAmount(void) const { return _amount; }

bool Account::makeWithdrawal(int withdrawal) {
  int p_amount = _amount;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << p_amount << ";";

  if (withdrawal > _amount) {
    std::cout << "withdrawal:refused" << std::endl;
    return false;
  }

  _amount -= withdrawal;
  _nbWithdrawals++;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;

  std::cout << "withdrawal:" << withdrawal << ";"
            << "amount:" << _amount << ";"
            << "nb_withdrawals:" << _nbWithdrawals << std::endl;

  return true;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(void)
    : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {}
