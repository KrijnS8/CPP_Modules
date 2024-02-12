/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:08:39 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:38:30 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) {}
Zombie::Zombie(std::string name) { _name = name; }
Zombie::~Zombie() { std::cout << "deconstructor: " << _name << std::endl; }

void Zombie::annouce( void ) { std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }
void Zombie::setName(std::string name) { _name = name; }
