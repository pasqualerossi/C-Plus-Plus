/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:03 by ddavlety          #+#    #+#             */
/*   Updated: 2024/08/25 13:45:50 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

#ifndef DB_FILE
# define DB_FILE "files/data.csv"
#endif

int main(int argc, char *argv[])
{
	std::fstream	fs;
	std::string		line;
	BitcoinExchange	data;

	(void)argc;
	(void)argv;
	fs.open(DB_FILE, std::fstream::in);
	if (!fs.is_open())
	{
		std::cerr << "Error: could not open database" << std::endl;
		return 1;
	}
	while (std::getline(fs, line)) {
		data.append(line);
	}
	// std::cout << data;
	fs.close();
	fs.open(argv[1], std::fstream::in);
	if (!fs.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}
	while (std::getline(fs, line))
	{
		std::stringstream	ss(line);
		std::string			key;
		double				value;

		if (line.find('|') == line.npos)
		{
			std::cerr << "Error: Bad input => " << line << std::endl;
			continue;
		}
		std::getline(ss, key, '|');
		if (key == "date ")
			continue;
		key.erase(key.end() - 1);
		try {
			ss >> value;
		} catch (std::exception &e) {
			std::cerr << "Error: Bad input on key " << key << std::endl;
		}
		if (value > 2147483647)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		if (value <= 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		std::cout << key << " => " << value << 	" = " << value * data[key] << std::endl;
	}
	return 0;
}
