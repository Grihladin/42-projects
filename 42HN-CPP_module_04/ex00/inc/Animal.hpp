/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:07:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 22:11:06 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
  // Constructors
  Animal();
  Animal(std::string t);
  Animal(const Animal &copy);

  // Destructor
  ~Animal();

  // Operators
  Animal &operator=(const Animal &assign);

  // Functions
  void makeSound();

protected:
  std::string type;
};

#endif
