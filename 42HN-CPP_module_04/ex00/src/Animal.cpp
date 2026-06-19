/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:11:14 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 20:01:11 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Constructors
Animal::Animal() {
  type = "noType";
  std::cout << "\e[0;33mDefault Constructor of Animal called\e[0m" << std::endl;
}

Animal::Animal(std::string n) {
  type = n;
  std::cout << "\e[0;33mConstructor of Animal with name called\e[0m"
            << std::endl;
}

Animal::Animal(const Animal &copy) {
  type = copy.type;
  std::cout << "\e[0;33mCopy Constructor of Animal called\e[0m" << std::endl;
}

// Destructor
Animal::~Animal() {
  std::cout << "\e[0;31mDestructor of Animal called\e[0m" << std::endl;
}

// Operators
Animal &Animal::operator=(const Animal &assign) {
  type = assign.type;
  std::cout << "\e[0;33mAnimal overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Fuctions
void Animal::makeSound() const { std::cout << "Animal's sounds\n"; }
std::string Animal::getType() const { return (type); }
