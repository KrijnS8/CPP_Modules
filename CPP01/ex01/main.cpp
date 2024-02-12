/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:32:40 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:37:53 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int		nbZombies = 10;
	Zombie* zombies = zombieHorde(nbZombies, "Zombie");
	for (int i = 0; i < nbZombies; i ++)
		zombies[i].annouce();
	delete[] zombies;
}
