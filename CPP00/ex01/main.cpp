/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 19:24:02 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/10 01:26:55 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string receive_input(std::string msg)
{
	std::string input = "";

	while (input.length() < 2) {
		std::cout << msg << " ";
        std::getline(std::cin, input);
    }
	return (input);
}

void add(PhoneBook &phoneBook)
{
	Contact 	c = Contact();
	std::string input = "";

	std::cout << "Please enter contact information!" << std::endl;
	c.setFirstName(receive_input("First Name:"));
	c.setLastName(receive_input("Last Name:"));
	c.setNickName(receive_input("Nickname:"));
	c.setPhoneNumber(receive_input("Phone Number:"));
	c.setDarkestSecret(receive_input("What is your darkest secret:"));
	phoneBook.addContact(c);
	std::cout << "Contact added successfully!" << std::endl;
}

void search(PhoneBook &phoneBook)
{

}

int main(void)
{
	PhoneBook 	phoneBook = PhoneBook();
	std::string	input;

	std::cout << "Welcome to crappy phonebook software!" << std::endl;
	while (true) {
		std::cout << "What would you like to do: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			break ;
		if (input.compare("ADD") == 0)
			add(phoneBook);
	}
	return (0);
}
