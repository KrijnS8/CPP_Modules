/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:08:48 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:33:37 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie( void );
		Zombie(std::string name);
		~Zombie();
		void annouce( void );
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif