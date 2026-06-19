/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:46:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 18:57:40 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main() {
  ClapTrap a("Bob");
  ClapTrap b(a);
  ClapTrap c;
  c = b;
  std::cout << "-----------------------------------------------\n";
  a.attack("YOU");
  a.takeDamage(5);
  a.takeDamage(4);
  a.beRepaired(3);
  a.beRepaired(3);
  a.beRepaired(3);
  a.beRepaired(3);
  std::cout << "-----------------------------------------------\n";
}
