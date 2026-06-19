/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:22:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/15 17:28:42 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Constructors
Brain::Brain() {
  std::cout << "\e[0;33mDefault Constructor of Brain called\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy) {
  for (int i = 0; i < 100; i++) {
    ideas[i] = copy.ideas[i];
  }
  std::cout << "\e[0;33mCopy Constructor of Brain called\e[0m" << std::endl;
}

// Destructor
Brain::~Brain() {
  std::cout << "\e[0;31mDestructor of Brain called\e[0m" << std::endl;
}

// Operators
Brain &Brain::operator=(const Brain &assign) {
  for (int i = 0; i < 100; i++) {
    ideas[i] = assign.ideas[i];
  }
  std::cout << "\e[0;33mBrain overload of assign operator called\e[0m"
            << std::endl;
  return *this;
}

std::string *Brain::getIdeas() { return ideas; }
