/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 16:40:24 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:04:21 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
# define __ZOMBIE__

# include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void annouce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif