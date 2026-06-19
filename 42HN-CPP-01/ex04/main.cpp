/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:45:59 by mratke            #+#    #+#             */
/*   Updated: 2025/07/01 17:26:06 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string replaceWord(std::string &content, std::string &s1,
                        std::string &s2) {
  if (s1.empty()) {
    return (content);
  }

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
  return (result);
}

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Wrong arguments\n";
    return (1);
  }

  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  // std::ofstream newFile(filename);
  // if (newFile.is_open()) {
  //   newFile << "I love my dog." << std::endl;
  //   newFile << "I'm walking with my dog everyday." << std::endl;
  //   newFile.close();
  // }

  std::ifstream inputFile(filename);
  if (!inputFile.is_open()) {
    std::cout << "Error: can't open " << filename << std::endl;
    return (1);
  }
  std::stringstream buffer;
  buffer << inputFile.rdbuf();
  std::string content = buffer.str();
  inputFile.close();

  std::string result = replaceWord(content, s1, s2);

  std::ofstream outputFile(filename + ".replace");
  if (!outputFile.is_open()) {
    std::cout << "Error: can't create output file\n";
    return (1);
  }
  outputFile << result;
  outputFile.close();

  return (0);
}
