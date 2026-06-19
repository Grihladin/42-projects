/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:36:32 by mratke            #+#    #+#             */
/*   Updated: 2025/06/30 16:41:01 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string &newWeapon) : type(newWeapon) {};

const std::string &Weapon::getType(void) const { return (type); }

void Weapon::setType(const std::string &newType) { type = newType; }
