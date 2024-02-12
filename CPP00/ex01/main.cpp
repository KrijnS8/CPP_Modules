/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 19:24:02 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/12 14:49:37 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void printBanner() {
  std::cout << R"(*****************************************
**             Phone Book              **
*****************************************
)";
}

std::string receiveInput(std::string msg)
{
	std::string input = "";

	while (input.length() < 1) {
		std::cout << msg;
        std::getline(std::cin, input);
    }
	return (input);
}

void add(PhoneBook &phoneBook)
{
	Contact 	c = Contact();
	std::string input = "";

	std::cout << "Please enter contact information!" << std::endl;
	c.setFirstName(receiveInput("First Name: "));
	c.setLastName(receiveInput("Last Name: "));
	c.setNickName(receiveInput("Nickname: "));
	c.setPhoneNumber(receiveInput("Phone Number: "));
	c.setDarkestSecret(receiveInput("What is your darkest secret: "));
	phoneBook.addContact(c);
	std::cout << "Contact added successfully!" << std::endl;
}

void search(PhoneBook &phoneBook)
{
	std::string input = "";

	if (phoneBook.getNumContacts() < 1) {
		std::cout << "No contacts available!" << std::endl;
		return ;
	}
	for (int i = 0; i < phoneBook.getNumContacts(); i++) {
		std::cout << std::setw(10) << std::right << i << "|" << phoneBook.getContact(i).smallDisplayString();
	}
	while (true) {
		input = receiveInput("Please select index: ");
		if (input.length() == 1 && isdigit(input[0]) && std::stoi(input) < phoneBook.getNumContacts())
			break ;
	}
	std::cout << phoneBook.getContact(0).fullDisplayString();
}

int main(void)
{
	PhoneBook 	phoneBook = PhoneBook();
	std::string	input;

	printBanner();
	std::cout << "Welcome to the crappy phone book!" << std::endl;
	while (true) {
		std::cout << "What would you like to do: ADD, SEARCH, EXIT" << std::endl;
		input = receiveInput(">>> ");
		if (input.compare("EXIT") == 0 || input.compare("exit") == 0)
			break ;
		if (input.compare("ADD") == 0 || input.compare("add") == 0)
			add(phoneBook);
		if (input.compare("SEARCH") == 0 || input.compare("search") == 0)
			search(phoneBook);
	}
	return (0);
}
