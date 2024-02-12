/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 16:56:50 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:06:18 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	randomChump("Foe");
	Zombie *zombie = newZombie("Foe1");
	zombie->annouce();
	delete zombie;
}
