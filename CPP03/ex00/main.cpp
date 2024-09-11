/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/11 13:07:23 by krijn         #+#    #+#                 */
/*   Updated: 2024/09/11 19:58:16 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.h"

int main(void)
{
	ClapTrap cp("test");
	ClapTrap cp1(cp);

	cp.attack("je moeder");
	cp.takeDamage(8);
	cp.beRepaired(5);
	cp.takeDamage(10);
	cp.takeDamage(7);
}
