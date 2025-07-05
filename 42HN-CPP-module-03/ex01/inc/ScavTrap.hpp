/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:18:00 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 18:56:11 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string n);
  ScavTrap(const ScavTrap &copy);

  // Destructor
  ~ScavTrap();

  // Operators
  ScavTrap &operator=(const ScavTrap &assign);

  // Functions
  void attack(const std::string &target);
  void guardGate();
};

#endif
