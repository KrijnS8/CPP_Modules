/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:32:40 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/07/18 12:52:14 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int		nbZombies = 10;
	Zombie* zombies = zombieHorde(nbZombies, "Zombie");
	if (!zombies)
		return (1);
	for (int i = 0; i < nbZombies; i ++)
		zombies[i].annouce();
	delete[] zombies;
}
