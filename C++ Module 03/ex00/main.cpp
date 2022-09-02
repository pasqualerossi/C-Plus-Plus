/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:48:08 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 18:53:36 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "---- CLAPTRAP MAIN ----\n" << std::endl;

	ClapTrap	ClaptrapA("ClaptrapA");
	ClapTrap	ClaptrapB("ClaptrapB");

	ClapTrap	ClapTrapC(ClaptrapA);
	std::cout << ClapTrapC << std::endl;

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapA.attack("ClaptrapB");
	ClaptrapB.takeDamage(ClaptrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	ClaptrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;
	return (0);
}

