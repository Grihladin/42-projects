/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:22:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/15 17:47:57 by mratke           ###   ########.fr       */
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
  brain = new Brain(*copy.brain);
  std::cout << "\e[0;33mCopy Constructor of Dog called\e[0m" << std::endl;
}

// Destructor
Dog::~Dog() {
  delete brain;
  std::cout << "\e[0;31mDestructor of Dog called\e[0m" << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign) {
  if (this != &assign) {
    Animal::operator=(assign);
    type = assign.type;
    if (brain)
      delete brain;
    brain = new Brain(*assign.brain);
  }
  std::cout << "\e[0;33mDog overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

// Fuctions
void Dog::makeSound() const { std::cout << "GAV GAV GAV" << std::endl; }
std::string Dog::getType() const { return (type); }

void Dog::assignIdeas() {
  std::string *dogsIdeas = brain->getIdeas();
  dogsIdeas[0] = "I want to paly!";
  dogsIdeas[1] = "Where is my meet?";
  dogsIdeas[2] = "I want to sleep";
}

void Dog::printIdeas() {
  std::string *dogsIdeas = brain->getIdeas();
  std::cout << dogsIdeas[0] << std::endl;
  std::cout << dogsIdeas[1] << std::endl;
  std::cout << dogsIdeas[2] << std::endl;
}
