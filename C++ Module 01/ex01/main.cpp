/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:23:05 by prossi            #+#    #+#             */
/*   Updated: 2022/08/02 19:17:41 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int number = 0;
	std::string	name;
	Zombie 		*z;
	
	z = zombieHorde(number, name);
	std::cout << "name of zombie" << std::endl;
	std::cin >> name;
	std::cout << "number of zombies" << std::endl;
	std::cin >> number;

	for (int i = 0; i < number; i++)
		z[i].announce();
	for (int i = 0; i < number; i++)
		z[i].distroyz();
	free(z);
}