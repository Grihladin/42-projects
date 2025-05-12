/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:02:46 by mratke            #+#    #+#             */
/*   Updated: 2025/05/13 01:21:38 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
  } else {
    for (int i = 1; i < argc; i++) {
      std::string str = argv[i];
      for (size_t j = 0; j < str.length(); j++) {
        str[j] = std::toupper(str[j]);
      }
      std::cout << str;
    }
    std::cout << "\n";
  }
}
