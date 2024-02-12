/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 16:39:38 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 16:58:27 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) { _name = name; }
Zombie::~Zombie() { std::cout << _name << std::endl; }

void Zombie::annouce( void ) { std::cout << _name << ": BraiiiiiiinnnzzzZ..."; }