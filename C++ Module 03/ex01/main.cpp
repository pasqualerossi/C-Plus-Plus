/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:54:38 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 18:55:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	std::cout << "\n---- SCAVTRAP MAIN ----\n" << std::endl;

	ScavTrap	ScavTrapA("ScavTrapA");
	ScavTrap	ScavTrapB("ScavTrapB");

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapA.attack("ScavTrapB");
	ScavTrapB.takeDamage(ScavTrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.guardGate();

	std::cout << std::endl;

	return (0);
}
