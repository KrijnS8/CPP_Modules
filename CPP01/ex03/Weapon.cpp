/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 18:01:11 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 13:17:40 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) { _type = type; }

const std::string &Weapon::getType() const { return (_type); }

void Weapon:: setType(std::string type) { _type = type; }
