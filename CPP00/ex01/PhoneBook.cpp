/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 19:03:46 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/09 19:22:39 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {};

void PhoneBook::addContact(Contact contact)
{
	if (numContacts < maxSize) {
		arr[numContacts] = contact;
		numContacts++;
		return ;
	}
	for (int i = 1; i < numContacts; i++)
		arr[i - 1] = arr[i];
	arr[numContacts - 1] = contact;
}

int PhoneBook::getNumContacts() {
	return (numContacts);
}

Contact PhoneBook::getContact(int index) {
	return (arr[index]);
}
