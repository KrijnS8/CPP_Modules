/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:27:28 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/16 15:46:45 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

#include <string>

class Harl
{
	private:
		static void _debug(void);
		static void _info(void);
		static void _warning(void);
		static void _error(void);
		Harl(void);
	public:
		static void complain(std::string level);
};

#endif
