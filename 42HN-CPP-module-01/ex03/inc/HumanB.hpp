/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:07:10 by mratke            #+#    #+#             */
/*   Updated: 2025/06/27 19:36:13 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB {
private:
  std::string name;
  Weapon *weapon;

public:
  HumanB(const std::string &n) : name(n), weapon(nullptr) {};

  void setWeapon(Weapon &weap) { weapon = &weap; }

  void attack(void) {
    if (weapon)
      std::cout << name << "attacks with their " << weapon->getType()
                << std::endl;
    else
      std::cout << name << "NO WEAPON" << std::endl;
  }
};

#endif
