/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:46:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/05 21:20:25 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main() {
  FragTrap original("test");
  std::cout << "----------------------------------------\n";
  FragTrap copied(original);
  std::cout << "----------------------------------------\n";
  FragTrap b("Bob");
  b.highFivesGuys();
  b.attack("YOU");
}
