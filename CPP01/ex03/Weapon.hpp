/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:57:38 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 18:05:18 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

# include <string>

class Weapon {
	private:
		std::string 		_type;
	public:
		const std::string	&getType() const;
		void				setType(std::string type);
};

#endif