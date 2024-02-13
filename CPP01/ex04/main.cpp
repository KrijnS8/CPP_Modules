/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/13 14:16:07 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/02/13 17:01:11 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdio>
#include <regex>

#define PROGRAM_NAME "sed"

void generateFile(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream		instream(fileName);
	std::ofstream		outstream(fileName + ".replace");
	std::stringstream	buffer;

	if (!instream.is_open() || !outstream.is_open())
		throw std::runtime_error("Can't open file!");

	buffer << instream.rdbuf();
	std::regex pattern(s1);
	try { outstream << std::regex_replace(buffer.str(), pattern, s2); }
	catch (const std::exception& e)
	{
		instream.close();
		outstream.close();
		throw ;
	}
	instream.close();
	outstream.close();
}

int main(int argc, char *argv[])
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;
	
	if (argc != 4)
	{
		std::cerr << "Error\nUsage: ./" << PROGRAM_NAME << " <fileName> <s1> <s2>" << std::endl;
		return (0);	
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	try { generateFile(fileName, s1, s2); }
	catch(const std::exception& e)
	{
		std::cerr << "Error\n" << e.what() << std::endl;
		return (1);
	}
	return (0);
}
