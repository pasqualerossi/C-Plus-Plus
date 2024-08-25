/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:06 by ddavlety          #+#    #+#             */
/*   Updated: 2024/08/25 13:42:07 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <exception>

int add(int v1, int v2)
{
	return v1 + v2;
}

int substract(int v1, int v2)
{
	return v1 - v2;
}

int multiply(int v1, int v2)
{
	return v1 * v2;
}

int divide(int v1, int v2)
{
	return v1 / v2;
}

int main (int argc, char *argv[])
{
	RPN int_storage;
	std::string equation;

	if (argc < 2)
	{
		std::cout << "Program requires input" << std::endl;
		return 0;
	}
	equation = argv[1];
	try {
		for (size_t i = 0; i < equation.size(); ++i)
		{
			if (equation[i] == ADD || equation[i] == SUB || equation[i] == DIV || equation[i] == MUL)
			{
				int_storage.calculate((Operation)equation[i]);
			} else if (equation[i] != ' ') {
				int_storage.add(equation[i]);
			}
		}
		std::cout << int_storage.top() << std::endl;
	} catch (std::invalid_argument& e) {
		std::cerr << e.what() << std::endl;
	} catch (std::logic_error& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
