/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:31:15 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 20:00:34 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap() {
  name = "noName";
  ClapTrap::name = "noName_clap_name";
  hitPoints = FragTrap::hitPoints;
  energyPoints = ScavTrap::energyPoints;
  attackDamage = FragTrap::attackDamage;
  std::cout << "\e[0;33mDefault Constructor of DiamondTrap called\e[0m"
            << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ScavTrap(n), FragTrap(n) {
  name = n;
  ClapTrap::name = n + "_clap_name";
  hitPoints = FragTrap::hitPoints;
  energyPoints = ScavTrap::energyPoints;
  attackDamage = FragTrap::attackDamage;
  std::cout << "\e[0;33mConstructor of DiamondTrap with name called\e[0m"
            << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy) {
  std::cout << "\e[0;33mCopy Constructor of DiamondTrap called\e[0m"
            << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
  std::cout << "\e[0;31mDestructor of DiamondTrap called\e[0m" << std::endl;
}

// Operators
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign) {
  if (this != &assign) {
    ClapTrap::operator=(assign);
  }
  std::cout << "\e[0;33mDiamondTrap overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Functions
void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "DiamondTrap name: " << name
            << " | ClapTrap name: " << ClapTrap::name << std::endl;
}
