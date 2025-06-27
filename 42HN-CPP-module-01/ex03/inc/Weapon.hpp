/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:09:21 by mratke            #+#    #+#             */
/*   Updated: 2025/06/27 19:21:13 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
  std::string type;

public:
  const std::string &getType(void) const { return (type); }
  void setType(const std::string &newType) { type = newType; }

  Weapon(const std::string &newWeapon) : type(newWeapon) {};
};

#endif
