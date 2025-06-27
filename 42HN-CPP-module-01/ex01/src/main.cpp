/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:33:29 by mratke            #+#    #+#             */
/*   Updated: 2025/06/18 19:47:18 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void) {
  int hordeSize = 4;
  Zombie *horde = zombieHorde(hordeSize, "Franc");
  for (int i = 0; i < hordeSize; i++) {
    std::cout << "Zombie numer: " << i << "   ";
    horde[i].announce();
  }
}
