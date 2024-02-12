/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/12 17:42:17 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/12 17:50:38 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << '\n' << stringPTR << '\n' << &stringREF << std::endl;
	std::cout << str << '\n' << *stringPTR << '\n' << str << std::endl;
}
