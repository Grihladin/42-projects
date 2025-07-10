/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:22:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 20:47:48 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructors
Dog::Dog() {
  type = "Dog";
  brain = new Brain();
  std::cout << "\e[0;33mDefault Constructor of Dog called\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
  std::cout << "\e[0;33mCopy Constructor of Dog called\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
  delete brain;
  std::cout << "\e[0;31mDestructor of Dog called\e[0m" << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign) {
  type = assign.type;
  std::cout << "\e[0;33mDog overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Fuctions
void Dog::makeSound() const { std::cout << "GAV GAV GAV" << std::endl; }
std::string Dog::getType() const { return (type); }
