/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/25 14:35:43 by kschelvi      #+#    #+#                 */
/*   Updated: 2025/03/25 17:09:24 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"
#include <sstream>
#include <cmath>
#include <iostream>

void	ScalarConverter::convert_c(char c) {
	std::string	ch = std::isprint(c) ? std::string(1, c): "Non displayable";
	int			i = static_cast<int>(c);
	float		f = static_cast<float>(c);
	double		d = static_cast<double>(c);

	std::cout << "char: " << ch << "\nint: " << i << "\nfloat: " << std::to_string(f) << "\ndouble: " << std::to_string(d) << std::endl;
}

void	ScalarConverter::convert_i(int i) {
	std::string ch = std::isprint(i) ? std::string(1, i): "Non displayable";
	float		f = static_cast<float>(i);
	double		d = static_cast<double>(i);

	std::cout << "char: " << ch << "\nint: " << i << "\nfloat: " << std::to_string(f) << "\ndouble: " << std::to_string(d) << std::endl;
}

void	ScalarConverter::convert_f(float f) {
	std::cout << "FLOAT" << std::endl;
}

void	ScalarConverter::convert_d(double d) {
	std::cout << "DOUBLE" << std::endl;
}


template <class T>
bool	check_type(const std::string& str) {
	std::istringstream	is(str);
	T object;
	is >> object;
	return (!is.fail() && is.rdbuf()->in_avail() == 0);
}

bool	check_special_float(const std::string& str) {
	try {
		std::size_t	pos;
		float f = std::stof(str, &pos);
		std::cout << "TEST FLOAT" << std::endl;
		return ((std::isinf(f) || std::isnan(f)) && pos + 1 == str.length() && str[pos] == 'f');
	} catch (std::exception& e) {
		return (false);
	}
}

bool	check_special_double(const std::string& str) {
	try {
		std::size_t	pos;
		double f = std::stod(str, &pos);
		std::cout << "TEST DOUBLE" << std::endl;
		return ((std::isinf(f) || std::isnan(f)) && pos == str.length());
	} catch (std::exception& e) {
		return (false);
	}
}

// TODO: remove this function and remove enum since they are unnecesary
ScalarConverter::DataType	get_type(const std::string& str) {
	if (check_type<char>(str))
		return (ScalarConverter::DataType::CHAR);
	if (check_type<int>(str))
		return (ScalarConverter::DataType::INT);
	if (check_type<float>(str) || check_special_float(str))
		return (ScalarConverter::DataType::FLOAT);
	if (check_type<double>(str) || check_special_double(str))
		return (ScalarConverter::DataType::DOUBLE);
	throw(ScalarConverter::InvalidTypeException());
}

void	ScalarConverter::convert(const std::string& literal) {
	DataType	type;

	try {
		type = get_type(literal);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	switch (type) {
		case DataType::CHAR:
			convert_c(literal[0]);
			break ;
		case DataType::INT:
			convert_i(std::stoi(literal));
			break ;
		case DataType::FLOAT:
			convert_f(std::stof(literal));
			break ;
		case DataType::DOUBLE:
			convert_d(std::stod(literal));
			break ;
	}
}

const char* ScalarConverter::InvalidTypeException::what() const noexcept {
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}
