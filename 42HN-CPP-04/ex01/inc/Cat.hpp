/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:21:49 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 20:19:15 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
public:
  // Constructors
  Cat();
  Cat(const Cat &copy);

  // Destructor
  ~Cat();

  // Operators
  Cat &operator=(const Cat &assign);

  // Functions
  void makeSound() const override;
  std::string getType() const override;

private:
  Brain *brain;
};

#endif
