/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/16 12:27:28 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/29 14:04:03 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

#include <string>

class Harl
{
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
	public:
		void complain(std::string level);
		Harl(void);
};

typedef void (Harl::*t_func) ( void );

#endif
