/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:18:00 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 19:20:04 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string n);
  FragTrap(const FragTrap &copy);

  // Destructor
  ~FragTrap();

  // Operators
  FragTrap &operator=(const FragTrap &assign);

  // Functions
  void attack(const std::string &target);
  void highFivesGuys(void);
};

#endif
