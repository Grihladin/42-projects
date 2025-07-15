/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:24:59 by mratke            #+#    #+#             */
/*   Updated: 2025/07/15 18:26:04 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main() {
  Animal *zoo[100];

  for (int i = 0; i < 50; i++) {
    zoo[i] = new Dog();
  }
  for (int i = 50; i < 100; i++) {
    zoo[i] = new Cat();
  }
  for (int i = 0; i < 100; i++) {
    delete zoo[i];
  }
  std::cout << "----------------------------------------------------------\n  ";
  Dog dog1;
  dog1.assignIdeas();
  Dog dog2(dog1);
  dog2.printIdeas();
}
