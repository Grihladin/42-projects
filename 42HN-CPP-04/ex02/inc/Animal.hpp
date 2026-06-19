/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:07:37 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 22:21:20 by mratke           ###   ########.fr       */
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
  Animal(std::string n);
  Animal(const Animal &copy);

  // Destructor
  virtual ~Animal();

  // Operators
  Animal &operator=(const Animal &assign);

  // Functions
  virtual void makeSound() const = 0;
  virtual std::string getType() const = 0;

protected:
  std::string type;
};

#endif
