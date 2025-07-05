/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:31:01 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 21:50:18 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
  // Constructors
  DiamondTrap();
  DiamondTrap(std::string n);
  DiamondTrap(const DiamondTrap &copy);

  // Destructor
  ~DiamondTrap();

  // Operators
  DiamondTrap &operator=(const DiamondTrap &assign);

  // Functions
  void attack(const std::string &target);
  void whoAmI();

private:
  std::string name;
};

#endif
