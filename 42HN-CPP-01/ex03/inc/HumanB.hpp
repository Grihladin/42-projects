/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:07:10 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:44:40 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
  std::string name;
  Weapon *weapon;

public:
  HumanB(const std::string &n);

  void setWeapon(Weapon &weap);

  void attack(void);
};

#endif
