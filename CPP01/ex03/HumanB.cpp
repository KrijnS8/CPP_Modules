/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:09:34 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 14:04:07 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

void HumanB::attack() {
	std::cout << _name << "attacks with their " << _weapon->getType() << std::endl;
}
