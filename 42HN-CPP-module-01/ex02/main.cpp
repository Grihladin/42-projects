/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:51:43 by mratke            #+#    #+#             */
/*   Updated: 2025/06/18 20:04:55 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "Memory address of string: " << &string << std::endl;
  std::cout << "Memory address stored in stringPTR: " << stringPTR << std::endl;
  std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

  std::cout << "--------------------------------------------" << std::endl;

  std::cout << "The value of string: " << string << std::endl;
  std::cout << "The value of stringPTR: " << *stringPTR << std::endl;
  std::cout << "The value of stringREF: " << stringREF << std::endl;

  return 0;
}
