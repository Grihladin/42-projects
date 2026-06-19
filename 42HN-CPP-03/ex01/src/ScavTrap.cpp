/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:42:15 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 19:24:59 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap() {
  name = "noName";
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "\e[0;33mDefault Constructor of ScavTrap called\e[0m"
            << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n) {
  name = n;
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "\e[0;33mConstructor of ScavTrap with name called\e[0m"
            << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
  std::cout << "\e[0;33mCopy Constructor of ScavTrap called\e[0m" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
  std::cout << "\e[0;31mDestructor of ScavTrap called\e[0m" << std::endl;
}

// Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &assign) {
  if (this != &assign) {
    ClapTrap::operator=(assign);
  }
  std::cout << "\e[0;33mScavTrap overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Functions
void ScavTrap::attack(const std::string &target) {
  std::cout << "ScavTrap " << ClapTrap::name << " attacks " << target
            << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode."
            << std::endl;
}
