/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/25 14:08:27 by kschelvi      #+#    #+#                 */
/*   Updated: 2025/03/25 16:00:26 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <string>
#include <exception>
#include <array>
#include <variant>

class ScalarConverter {
	private:
		ScalarConverter( void );
		ScalarConverter(const ScalarConverter& sc);
		~ScalarConverter( void );
		ScalarConverter& operator=(const ScalarConverter& sc);

		static void	convert_c(char c);
		static void	convert_i(int i);
		static void	convert_f(float f);
		static void	convert_d(double d);
	
	public:
		static void	convert(const std::string& literal);

		class InvalidTypeException: public std::exception {
			virtual const char* what() const noexcept;
		};

		enum class DataType {
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};
};

#endif
