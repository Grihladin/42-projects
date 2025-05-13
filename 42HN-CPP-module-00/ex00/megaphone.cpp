/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:02:46 by mratke            #+#    #+#             */
/*   Updated: 2025/05/13 19:36:18 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
  } else {
    for (int i = 1; i < argc; ++i) {
      std::string str = argv[i];
      for (auto& c : str) {
        c = std::toupper(c);
      }
      std::cout << str;
    }
    std::cout << "\n";
  }
  return 0;
}
