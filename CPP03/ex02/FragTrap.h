/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/04 11:47:07 by krijn         #+#    #+#                 */
/*   Updated: 2024/12/04 11:55:28 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#ifndef CLAPTRAP_H
# include "ClapTrap.h"
#endif

#include <string>

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &ft);
        FragTrap &operator=(const FragTrap &ft);
        void    highFivesGuys(void);
};

#endif
