/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:02:08 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 18:58:42 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FRAGTRAP constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "FRAGTRAP constructor called" << std::endl;
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap &fragTrap)
{
	std::cout << "FRAGTRAP copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		std::cout << "FRAGTRAP assignation operator called" << std::endl;
		this->setName(fragTrap.getName());
		this->setHitpoints(fragTrap.getHitpoints());
		this->setEnergyPoints(fragTrap.getEnergyPoints());
		this->setAttackDamage(fragTrap.getAttackDamage());
	}
	return (*this);
}

void FragTrap::attack(std::string const & target)
{
    std::cout << this->getName() << " has attacked " << target << ", " << "causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << ": \"HIGH FIVES GUYS!\"" << std::endl;
}
