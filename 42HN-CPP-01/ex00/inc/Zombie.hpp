/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:33:20 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:20:34 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
  std::string name;

public:
  Zombie();
  Zombie(std::string zombieName);
  ~Zombie();

  void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
