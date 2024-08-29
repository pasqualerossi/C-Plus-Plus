#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <ctime>

#ifndef DB_FILE
# define DB_FILE "./files/data.csv"
#endif


void check_key(std::string key) {
	std::stringstream ss(key);
	std::string token;
	int year;
	int month;
	int day;

	int pos = 0;
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

	static const int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while (std::getline(ss, token, '-')) {
		std::stringstream key(token);
		switch (pos)
		{
			case 0:
				key >> year;
				if (key.fail() || !key.eof())
					throw std::logic_error("check date");
				if (token.length() != 4 ||
					year > now->tm_year + 1900 ||
					year < 2009)
					throw std::logic_error("check date");
				pos++;
				continue;;
			case 1:
				key >> month;
				if (key.fail() || !key.eof())
					throw std::logic_error("check date");
				if (token.length() != 2 ||
					(year == now->tm_year && month > now->tm_mon + 1))
					throw std::logic_error("check date");
				if (month > 12 || month < 1)
					throw std::logic_error("check date");
				pos++;
				continue;;
			case 2:
				key >> day;
				if (key.fail() || !key.eof())
					throw std::logic_error("check date");
				if (token.length() != 2 ||
					(year == now->tm_year && month == now->tm_mon && day > now->tm_mday))
					throw std::logic_error("check date");
				if (year == 2009 && (month < 1 || (month == 1 && day < 02)))
					throw std::logic_error("check date");
				if (day < 1 || day > daysInMonths[month - 1])
					throw std::logic_error("check date");
				pos++;
				continue;;
			default:
				throw std::logic_error("check date");
				continue;;
			pos++;
		}
	}
}

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
		float				value;

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
			check_key(key);
		} catch (std::exception &e) {
			std::cerr << "Error: Bad input on key " << key << std::endl;
			continue;
		}
		if (ss.fail()) {
			std::cerr << "Error: Bad input on key " << key << std::endl;
			continue;
		}
		if (value > 1000)
		{
			std::cerr << "Error: value is too large." << std::endl;
			continue;
		}
		if (value <= 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		std::cout << key << " => " << value << 	" = " << value * data[key] << std::endl;
	}
	return 0;
}
