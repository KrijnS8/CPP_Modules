/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 19:03:46 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/12 12:38:51 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _numContacts(0) {};

void PhoneBook::addContact(Contact contact)
{
	if (_numContacts < _maxSize) {
		_arr[_numContacts] = contact;
		_numContacts++;
		return ;
	}
	for (int i = 1; i < _numContacts; i++)
		_arr[i - 1] = _arr[i];
	_arr[_numContacts - 1] = contact;
}

int PhoneBook::getNumContacts() {
	return (_numContacts);
}

Contact PhoneBook::getContact(int index) {
	return (_arr[index]);
}
