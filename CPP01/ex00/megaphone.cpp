/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 13:14:26 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/09 16:04:57 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

std::string to_string(int arr_c, char **string_arr) {
	std::string result;

	for (int i = 0; i < arr_c; i++)
		result += string_arr[i];
	return (result);
}

int main(int argc, char *argv[]) {
	try {
		std::string	string;

		string = to_string(argc - 1, argv + 1);
		for (char &c : string)
			if (islower(c))
				c = toupper(c);
		std::cout << string << std::endl;
	}
	catch (std::exception e) {
		std::cout << "ERROR!" << std::endl;
	}
	return (0);
}
