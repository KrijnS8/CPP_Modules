/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 13:01:43 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 14:01:32 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <string>

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon&		_weapon;
		// HumanA(void);
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack();
};

#endif