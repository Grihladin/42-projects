/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:22:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 20:47:41 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Constructors
Cat::Cat() {
  type = "Cat";
  brain = new Brain();
  std::cout << "\e[0;33mDefault Constructor of Cat called\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
  std::cout << "\e[0;33mCopy Constructor of Cat called\e[0m" << std::endl;
}

// Destructor
Cat::~Cat() {
  delete brain;
  std::cout << "\e[0;31mDestructor of Cat called\e[0m" << std::endl;
}

// Operators
Cat &Cat::operator=(const Cat &assign) {
  type = assign.type;
  std::cout << "\e[0;33mCat overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Fuctions
void Cat::makeSound() const { std::cout << "Myaau Myauuu Mayuuu" << std::endl; }

std::string Cat::getType() const { return (type); }
