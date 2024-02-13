/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:05:09 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 14:01:28 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon) {
	_name = name;
}

void HumanA::attack() {
	std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}
