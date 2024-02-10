/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: krijn <krijn@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 18:18:08 by krijn         #+#    #+#                 */
/*   Updated: 2024/02/09 19:22:44 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {
	private:
		constexpr static int maxSize = 8;
		Contact	arr[maxSize];
		int 	numContacts;
	
	public:
		PhoneBook();
		void	addContact(Contact contact);
		int		getNumContacts();
		Contact	getContact(int index);
};

#endif
