/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:33:20 by mratke            #+#    #+#             */
/*   Updated: 2025/06/18 20:13:37 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
  std::string name;

public:
  Zombie() : name("noName") {}

  Zombie(std::string zombieName) : name(zombieName) {}

  void announce(void);
  ~Zombie() { std::cout << name << " is destructed\n"; }
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
