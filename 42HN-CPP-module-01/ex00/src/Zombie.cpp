/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:31:40 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:20:36 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() : name("noName") {}

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() { std::cout << name << " is destructed\n"; }

void Zombie::announce(void) { std::cout << name << ": BraiiiiiiinnnzzzZ...\n"; }
