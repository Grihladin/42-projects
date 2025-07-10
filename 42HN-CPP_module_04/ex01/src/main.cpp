/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 22:24:59 by mratke            #+#    #+#             */
/*   Updated: 2025/07/10 21:50:04 by mratke           ###   ########.fr       */
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
}
