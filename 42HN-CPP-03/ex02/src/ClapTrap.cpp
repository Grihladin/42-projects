/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:30:13 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 19:30:53 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap() {
  name = "noName";
  std::cout << "\e[0;33mDefault Constructor of ClapTrap called\e[0m"
            << std::endl;
}

ClapTrap::ClapTrap(std::string n) {
  name = n;
  std::cout << "\e[0;33mConstructor of ClapTrap with name called\e[0m"
            << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
  name = copy.name;
  hitPoints = copy.hitPoints;
  energyPoints = copy.energyPoints;
  attackDamage = copy.attackDamage;
  std::cout << "\e[0;33mCopy Constructor of ClapTrap called\e[0m" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
  std::cout << "\e[0;31mDestructor of ClapTrap called\e[0m" << std::endl;
}

// Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &assign) {
  name = assign.name;
  hitPoints = assign.hitPoints;
  energyPoints = assign.energyPoints;
  attackDamage = assign.attackDamage;
  std::cout << "\e[0;33mClapTrap overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Functions
void ClapTrap::attack(const std::string &target) {
  std::cout << "ClapTrap " << name << " attacks " << target << " causing "
            << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
  hitPoints -= amount;
  std::cout << "ClapTrap " << name << " take " << amount << " damage. "
            << "HP left: " << hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  hitPoints += amount;
  std::cout << "ClapTrap " << name << " is being repaired for " << amount
            << " HP."
            << " Current HP: " << hitPoints << std::endl;
}
