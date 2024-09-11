/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/11 13:11:19 by krijn         #+#    #+#                 */
/*   Updated: 2024/09/11 18:23:17 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap(): _name("steve"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	*this = ct;
	std::cout << "Copy constructor constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	_name = ct._name;
	_hitPoints = ct._hitPoints;
	_energyPoints = ct._energyPoints;
	_attackDamage = ct._attackDamage;
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " can't attack cause it's dead!" << std::endl;
		return ;
	}
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " has no energy!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << \
			", causing " << _attackDamage << " hitpoints!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	if ((int)_hitPoints - (int)amount < 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " was attacked and lost " \
				 << amount << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	if (_energyPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " has no energy!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " has repaired itself, adding  " \
				<< amount << " hitpoints!" << std::endl;
}
