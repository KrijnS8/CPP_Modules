/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 18:42:44 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/12 12:44:07 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

static std::string truncate_string(std::string str, size_t len) {
	if (str.length() <= len)
		return (str);
	str = str.substr(0, len);
	str.back() = '.';
	return (str);
}

std::string Contact::fullDisplayString() {
	std::stringstream ss;

	ss << "First Name: " << _firstName << std::endl;
	ss << "Last Name: " << _lastName << std::endl;
	ss << "Nickname: " << _nickName << std::endl;
	ss << "Phone Number: " << _phoneNumber << std::endl;
	ss << "Darkest Secret: " << _darkestSecret << std::endl;
	return (ss.str());
}

std::string Contact::smallDisplayString() {
	std::stringstream ss;

	ss << std::setw(10) << std::right << truncate_string(_firstName, 10) << "|";
	ss << std::setw(10) << std::right << truncate_string(_lastName, 10) << "|";
	ss << std::setw(10) << std::right << truncate_string(_nickName, 10) << std::endl;
	return (ss.str());
}

std::string Contact::getFirstName() {
    return _firstName;
}

std::string Contact::getLastName() {
    return _lastName;
}

std::string Contact::getNickName() {
    return _nickName;
}

std::string Contact::getPhoneNumber() {
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return _darkestSecret;
}

void Contact::setFirstName(std::string firstName) {
	_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	_darkestSecret = darkestSecret;
}
