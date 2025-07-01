/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:32:49 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:36:05 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(const std::string &n) : name(n), weapon(nullptr) {};

void HumanB::setWeapon(Weapon &weap) { weapon = &weap; }

void HumanB::attack(void) {
  if (weapon)
    std::cout << name << "attacks with their " << weapon->getType()
              << std::endl;
  else
    std::cout << name << "NO WEAPON" << std::endl;
}
