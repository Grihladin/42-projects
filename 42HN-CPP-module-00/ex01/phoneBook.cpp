/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:52:04 by mratke            #+#    #+#             */
/*   Updated: 2025/06/22 19:43:21 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdlib>
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

std::string getInput(std::string output) {
  std::string input;

  std::cout << output;
  while (input.empty()) {
    if (!std::getline(std::cin, input)) {
      std::cout << "\nCONTROL + D handle. Exiting.\n";
      exit(1);
    }
    if (input.empty()) {
      std::cout << "You must enter something.\n";
      std::cout << output;
    }
  }
  return (input);
}

Contact createContact() {
  std::string phoneNumber, nickname, firstName, lastName, secret;
  bool validPhoneNumber = false;

  while (!validPhoneNumber) {
    phoneNumber = getInput("Enter phone number: ");
    if (!isValidNumber(phoneNumber))
      std::cout << "Phone number can contain digits/+/-/)/), please enter "
                   "correct format\n";
    else
      validPhoneNumber = true;
  }

  nickname = getInput("Enter nickname: ");
  firstName = getInput("Enter first name: ");
  lastName = getInput("Enter last name: ");
  secret = getInput("Enter darkest secret: ");

  return (Contact(phoneNumber, nickname, firstName, lastName, secret));
}

void handleSearch(PhoneBook book) {
  int index;
  std::string str;

  book.displayAllContacts();
  index = -1;
  while (index < 0 || index > 7) {
    str = getInput("Choose contact (0 to 7): ");
    if (str.length() == 1 && std::isdigit(str[0])) {
      index = str[0] - '0';
      if (index >= 0 && index <= 7) {
        book.displayContact(index);
        break;
      } else {
        std::cout << "Enter a single digit from 0 to 7.\n";
        index = -1;
      }
    } else {
      std::cout << "Enter a single digit from 0 to 7.\n";
    }
  }
}

int main() {
  std::string command;
  PhoneBook book;
  Contact newContact;

  while (1) {
    command = getInput("Enter command (ADD, SEARCH, EXIT): ");
    if (command == "EXIT")
      break;
    else if (command == "ADD") {
      newContact = createContact();
      book.addContact(newContact);
    } else if (command == "SEARCH") {
      handleSearch(book);
    }
  }
  return (0);
}
