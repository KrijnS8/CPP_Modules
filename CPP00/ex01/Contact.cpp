/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 18:42:44 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/10 23:04:06 by krijn         ########   odam.nl         */
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

	ss << "First Name: " << firstName << std::endl;
	ss << "Last Name: " << lastName << std::endl;
	ss << "Nickname: " << nickName << std::endl;
	ss << "Phone Number: " << phoneNumber << std::endl;
	ss << "Darkest Secret: " << darkestSecret << std::endl;
	return (ss.str());
}

std::string Contact::smallDisplayString() {
	std::stringstream ss;

	ss << std::setw(10) << std::right << truncate_string(firstName, 10) << "|";
	ss << std::setw(10) << std::right << truncate_string(lastName, 10) << "|";
	ss << std::setw(10) << std::right << truncate_string(nickName, 10) << std::endl;
	return (ss.str());
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickName() {
    return nickName;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}

void Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}
