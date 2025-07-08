/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:22:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/08 22:32:40 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Constructors
Dog::Dog() {
  type = "Dog";
  std::cout << "\e[0;33mDefault Constructor of Dog called\e[0m" << std::endl;
}

Dog::Dog(const Dog &copy) {
  type = copy.type;
  std::cout << "\e[0;33mCopy Constructor of Dog called\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
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
void Dog::makeSound() {
  if (type == "Dog")
    std::cout << "Bark Bark Bark" << std::endl;
  else if (type == "Cat")
    std::cout << "Myaau Myauuu Mayuuu" << std::endl;
}
