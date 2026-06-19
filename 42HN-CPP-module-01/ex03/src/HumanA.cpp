/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:25:03 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:32:21 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &weap) : name(n), weapon(weap) {}

void HumanA::attack(void) {
  std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}
