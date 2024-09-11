/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/09/11 13:17:30 by krijn         #+#    #+#                 */
/*   Updated: 2024/09/11 13:22:06 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &cp);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &ct);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif
