/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/09 13:14:26 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/09 18:11:15 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

std::string to_string(int arr_c, char **string_arr)
{
	std::string result;

	for (int i = 0; i < arr_c; i++)
		result += string_arr[i];
	return (result);
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	try {
		std::string	string;

		string = to_string(argc - 1, argv + 1);
		for (char &c : string)
			if (islower(c))
				c = toupper(c);
		std::cout << string << std::endl;
	}
	catch (std::exception e) {
		std::cout << "Error!" << std::endl;
	}
	return (0);
}
