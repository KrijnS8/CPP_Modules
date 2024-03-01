/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/29 15:46:52 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/03/01 12:26:17 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include <iostream>

// Default constructor
Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called\n";
}

// Copy constructor
Fixed::Fixed( const F& other ): _value(other._value)
{
	std::cout << "Copy constructor called\n";
}

// Default destructor
Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

// Copy assignment operator overload
Fixed& Fixed::operator=(const F& other)
{
	std::cout << "Copy assignment operator called\n";
	_value = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	_value = raw;
}
