/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:26:36 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 11:54:14 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	replace(std::string file, std::string s1, std::string s2) 
{
	std::fstream	old_file;
	std::fstream	new_file;
	std::string		line;
	std::string		aux;
	size_t			find_value;

	old_file.open(file.c_str(), std::ios::in);
	new_file.open(std::string(file + ".replace").c_str(), std::ios::out);
	if (!old_file)
	{
		std::cout << "The input file could not be opened" << std::endl;
	} 
	else if (!new_file) 
	{
		std::cout << "The output file could not be opened" << std::endl;
	} 
	else 
	{
		while (getline(old_file, line)) 
		{
			int	last = 0;
			while ((find_value = line.find(s1, last)) != std::string::npos) 
			{
				aux = line.substr(find_value + s1.size());
				line.erase(find_value);
				line += s2 + aux;
				last = find_value + s2.size();
			}
			new_file << line;
			if (!old_file.eof())
				new_file << std::endl;
		}
	}
	old_file.close();
	new_file.close();
}

int main(int argc, char *argv[]) 
{
	if (argc == 4) 
	{
		if (!argv[2][0] || !argv[3][0])
			std::cout << "Strings can't be empty" << std::endl;
		else
			replace(argv[1], argv[2], argv[3]);
	}
	else 
		std::cout << "Wrong amount of arguments" << std::endl;
	return 0;
}
