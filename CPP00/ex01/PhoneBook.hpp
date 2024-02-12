/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 18:18:08 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/12 12:38:22 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {
	private:
		constexpr static int _maxSize = 8;
		Contact	_arr[_maxSize];
		int 	_numContacts;
	
	public:
		PhoneBook();
		void	addContact(Contact contact);
		int		getNumContacts();
		Contact	getContact(int index);
};

#endif
