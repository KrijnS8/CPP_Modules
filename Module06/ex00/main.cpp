/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/25 14:07:10 by kschelvi      #+#    #+#                 */
/*   Updated: 2025/03/25 16:14:20 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

int main( int argc, char *argv[] ) {
	if (argc < 2)
		return (1);
	
	ScalarConverter::convert(argv[1]);
}
