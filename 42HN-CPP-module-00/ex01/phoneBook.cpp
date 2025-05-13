/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:52:04 by mratke            #+#    #+#             */
/*   Updated: 2025/05/13 21:13:42 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

class Contact {
private:
  int phoneNumber;
  std::string nickname;
  std::string firstName;
  std::string lastName;
  std::string secret;

public:
  Contact(int n, std::string nick, std::string first, std::string second,
          std::string darkSecret) {
    phoneNumber = n;
    nickname = nick;
    firstName = first;
    lastName = second;
    secret = darkSecret;
  }

  Contact() {
    phoneNumber = 0;
    nickname = "";
    firstName = "";
    lastName = "";
    secret = "";
  }

  ~Contact() {
    phoneNumber = 0;
    nickname = "";
    firstName = "";
    lastName = "";
    secret = "";
  }
};

class PhoneBook {
private:
  Contact contacts[9];
  int currentIndex;

public:
  PhoneBook() { currentIndex = 0; }

  void initPhoneBook() { //improove this part no need to init i have constuctor. here need addcontact
    for (auto &obj : contacts) {
      obj = Contact();
    }
  }
};

Contact createContact() {}

int main(int argc, char **argv) {
  int phoneNumber;
  ;

  while (1) {
    std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    std::getline(std::cin, command);
    if (command == "EXIT")
      break;
    else if (command == "ADD") {
      std::cout << "Enter phone number: " std::getline(std::cin, phoneNumber)
    }
  }
}
