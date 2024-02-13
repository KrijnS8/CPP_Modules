/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:57:38 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 13:17:30 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <string>

class Weapon {
	private:
		std::string 		_type;
	public:
		Weapon(void);
		Weapon(std::string type);
		const std::string	&getType() const;
		void				setType(std::string type);
};

#endif