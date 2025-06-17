/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:52:04 by mratke            #+#    #+#             */
/*   Updated: 2025/06/17 15:49:02 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

std::string formatStr(std::string &str) {
  if (str.length() > 10)
    return (str.substr(0, 9) + ".");
  return (str);
}

class Contact {
private:
  std::string phoneNumber;
  std::string nickname;
  std::string firstName;
  std::string lastName;
  std::string secret;

public:
  Contact(std::string n, std::string nick, std::string first,
          std::string second, std::string darkSecret) {
    phoneNumber = n;
    nickname = nick;
    firstName = first;
    lastName = second;
    secret = darkSecret;
  }

  Contact() {
    phoneNumber = "";
    nickname = "";
    firstName = "";
    lastName = "";
    secret = "";
  }

  std::string getPhoneNumber() { return (phoneNumber); }
  std::string getNickname() { return (nickname); }
  std::string getFirstName() { return (firstName); }
  std::string getLastName() { return (lastName); }
  std::string getSecret() { return (secret); }
};

class PhoneBook {
private:
  Contact contacts[8];
  int currentIndex;

public:
  PhoneBook() { currentIndex = 0; }

  void addContact(Contact &newContact) {
    contacts[currentIndex % 8] = newContact;
    currentIndex++;
  }

  void displayAllContacts() {
    std::string tmp;
    std::cout << std::left;
    std::cout << "----------+----------+----------+----------+" << '\n';
    std::cout << std::setw(10) << "INDEX" << "|";
    std::cout << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::setw(10) << "NICKNAME" << "|" << "\n";
    std::cout << "----------+----------+----------+----------+" << '\n';
    for (int i = 0; i < 8; i++) {
      if (!contacts[i].getPhoneNumber().empty()) {
        std::cout << std::setw(10) << i << "|";
        tmp = contacts[i].getFirstName();
        std::cout << std::setw(10) << formatStr(tmp) << "|";
        tmp = contacts[i].getLastName();
        std::cout << std::setw(10) << formatStr(tmp) << "|";
        tmp = contacts[i].getNickname();
        std::cout << std::setw(10) << formatStr(tmp) << "|" << '\n';
        std::cout << "----------+----------+----------+----------+" << '\n';
      }
    }
  }

  void displayContact(int index) {
    if (index >= 0 && index < 8 && !contacts[index].getPhoneNumber().empty()) {
      std::cout << "First Name: " << contacts[index].getFirstName()
                << std::endl;
      std::cout << "Last Name: " << contacts[index].getLastName() << '\n';
      std::cout << "Nickname: " << contacts[index].getNickname() << '\n';
      std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << '\n';
      std::cout << "Darkest Secret: " << contacts[index].getSecret() << '\n';
    } else {
      std::cout << "Invalid index or no contact at this position." << '\n';
    }
  }
};

bool isValidNumber(std::string number) {
  for (auto &c : number) {
    if (!std::isdigit(c) && c != '+' && c != '-' && c != ' ' && c != '(' &&
        c != ')') {
      return (false);
    }
  }
  return (true);
}

Contact createContact() {
  std::string phoneNumber, nickname, firstName, lastName, secret;
  bool validPhoneNumber = false;

  while (!validPhoneNumber) {
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    if (!isValidNumber(phoneNumber))
      std::cout << "Phone number can contain digits/+/-/)/), please enter "
                   "correct format\n";
    else
      validPhoneNumber = true;
  }

  std::cout << "Enter nickname: ";
  std::getline(std::cin, nickname);

  std::cout << "Enter first name: ";
  std::getline(std::cin, firstName);

  std::cout << "Enter last name: ";
  std::getline(std::cin, lastName);

  std::cout << "Enter darkest secret: ";
  std::getline(std::cin, secret);

  return (Contact(phoneNumber, nickname, firstName, lastName, secret));
}

int main() {
  std::string phoneNumber;
  std::string command;
  PhoneBook book;
  std::string str;
  Contact newContact;
  int index = -1;

  while (1) {
    std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    std::getline(std::cin, command);
    if (command == "EXIT")
      break;
    else if (command == "ADD") {
      newContact = createContact();
      book.addContact(newContact);
    } else if (command == "SEARCH") {
      book.displayAllContacts();
      while (!(index >= 0 && index <= 7)) {
        std::cout << "Choose contact (0 to 7): ";
        std::getline(std::cin, str);
        if (str.length() == 1 && std::isdigit(str[0])) {
          index = str[0] - '0';
          if (!(index >= 0 && index <= 7))
            std::cout << "Invalid index.\n";
        } else
          std::cout << "Enter a singe digit. \n";
      }
      book.displayContact(index);
    }
  }
}
