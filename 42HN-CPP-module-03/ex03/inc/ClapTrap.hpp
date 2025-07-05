/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:30:23 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 18:51:26 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
public:
  // Constructors
  ClapTrap();
  ClapTrap(std::string n);
  ClapTrap(const ClapTrap &copy);

  // Destructor
  ~ClapTrap();

  // Operators
  ClapTrap &operator=(const ClapTrap &assign);

  // Functions
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

protected:
  std::string name;
  unsigned int hitPoints;
  unsigned int energyPoints;
  unsigned int attackDamage;
};

#endif
