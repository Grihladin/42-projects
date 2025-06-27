/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:07:13 by mratke            #+#    #+#             */
/*   Updated: 2025/06/27 19:25:55 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
  std::string name;
  Weapon &weapon;

public:
  HumanA(const std::string &n, Weapon &weap) : name(n), weapon(weap) {}

  void attack(void) {
    std::cout << name << "attacks with their " << weapon.getType() << std::endl;
  }
};

#endif
