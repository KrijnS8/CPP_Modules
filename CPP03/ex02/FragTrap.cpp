/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/04 11:46:59 by krijn         #+#    #+#                 */
/*   Updated: 2024/12/04 12:29:17 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "FragTrap.h"

FragTrap::FragTrap()
{
    _type = "FragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called! << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _type = "FragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap name constructor called! << std::endl;
}

FragTrap::FragTrap(FragTrap &ft)
{

}

FragTrap::FragTrap &operator=(const FragTrap &ft)
{

}

FragTrap::void    highFivesGuys(void)
{

}
