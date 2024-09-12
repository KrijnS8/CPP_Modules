/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/11 13:07:23 by krijn         #+#    #+#                 */
/*   Updated: 2024/09/13 00:02:50 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"
int main(void)
{
	ClapTrap cp("test");
	ScavTrap st("test2");
	ScavTrap st2(st);

	cp.attack("je moeder");
	cp.takeDamage(8);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.takeDamage(7);
	st.attack("je moeder");
	st2.attack("je moeder");
}
