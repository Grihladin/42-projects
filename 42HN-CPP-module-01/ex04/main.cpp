/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:45:59 by mratke            #+#    #+#             */
/*   Updated: 2025/06/27 21:01:43 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Wrong arguments\n";
    return (1);
  }

  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::ifstream inputFile(filename);
  if (!inputFile.is_open()) {
    std::cout << "Error: can't open " << filename << std::endl;
    return (1);
  }

  std::string content;
  std::string line;
  while (std::getline(inputFile, line)) {
    content += line + "\n";
  }
  inputFile.close();

  std::string result;
  for (size_t i = 0; i < content.length();) {
    if (i + s1.length() <= content.length() &&
        content.substr(i, s1.length()) == s1) {
      result += s2;
      i += s1.length();
    } else {
      result += content[i];
      i++;
    }
  }

  std::ofstream outputFile(filename + ".replace");
  if (!outputFile.is_open()) {
    std::cout << "Error: can't create output file\n";
    return (1);
  }

  outputFile << result;
  outputFile.close();

  return (0);
}
