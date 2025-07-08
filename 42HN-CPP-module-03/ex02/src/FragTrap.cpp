/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:42:15 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 19:30:20 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// Constructors
FragTrap::FragTrap() {
  name = "noName";
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "\e[0;33mDefault Constructor of FragTrap called\e[0m"
            << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n) {
  name = n;
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "\e[0;33mConstructor of FragTrap with name called\e[0m"
            << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
  std::cout << "\e[0;33mCopy Constructor of FragTrap called\e[0m" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
  std::cout << "\e[0;31mDestructor of FragTrap called\e[0m" << std::endl;
}

// Operators
FragTrap &FragTrap::operator=(const FragTrap &assign) {
  if (this != &assign) {
    ClapTrap::operator=(assign);
  }
  std::cout << "\e[0;33mScavTrap overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Functions
void FragTrap::attack(const std::string &target) {
  std::cout << "FragTrap " << name << " attacks " << target << " causing "
            << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << name << ": positive high-fives request." << std::endl;
}
