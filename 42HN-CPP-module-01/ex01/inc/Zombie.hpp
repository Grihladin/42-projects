/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:33:20 by mratke            #+#    #+#             */
/*   Updated: 2025/06/18 20:13:58 by mratke           ###   ########.fr       */
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
  void setName(std::string name);
  ~Zombie() { std::cout << name << " is destructed\n"; }
};

Zombie *zombieHorde(int N, std::string name);

#endif
