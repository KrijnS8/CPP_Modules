/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/12 15:24:55 by krijn         #+#    #+#                 */
/*   Updated: 2024/09/13 00:04:23 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.h"
#include "ClapTrap.h"

ScavTrap::ScavTrap(): ClapTrap()
{
	_type = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_name = name;
	_type = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st): ClapTrap(st)
{
	*this = st;
	std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	_name = st._name;
	_type = st._type;
	_hitPoints = st._hitPoints;
	_energyPoints = st._energyPoints;
	_attackDamage = st._attackDamage;
	return (*this);

}
