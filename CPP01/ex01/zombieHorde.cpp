/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:09:45 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:32:39 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* ptr = new Zombie[N];

	for (int i = 0; i < N; i++)
		ptr[i].setName(name);
	return (ptr);
}
