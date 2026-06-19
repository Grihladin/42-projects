/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:46:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 19:52:41 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main() {
  DiamondTrap a;
  DiamondTrap b(a);
  DiamondTrap c;
  c = a;
  std::cout << "----------------------------------------\n";
  DiamondTrap z("Zed");
  z.whoAmI();
  z.attack("YOU");
  std::cout << "----------------------------------------\n";
}
