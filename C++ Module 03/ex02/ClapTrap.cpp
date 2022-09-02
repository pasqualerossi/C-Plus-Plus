/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:00:57 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 18:58:06 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	_Name(""),
						_Hitpoints(10),
						_EnergyPoints(10),
						_AttackDamage(0)
{
	std::cout << "Default CLAPTRAP constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) :  _Name(Name),
										_Hitpoints(10),
										_EnergyPoints(10),
										_AttackDamage(0)
{
	std::cout << "CLAPTRAP constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
	std::cout << "CLAPTRAP copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP destructor called" << std::endl;
}

std::string	&ClapTrap::getName()
{
	return (_Name);
}

void		ClapTrap::setName(std::string &Name)
{
	_Name = Name;
}

int			&ClapTrap::getHitpoints()
{
	return (_Hitpoints);
}

void		ClapTrap::setHitpoints(int Hitpoints)
{
	_Hitpoints = Hitpoints;
}

int			&ClapTrap::getEnergyPoints()
{
	return (_EnergyPoints);
}

void		ClapTrap::setEnergyPoints(int EnergyPoints)
{
	_EnergyPoints = EnergyPoints;
}

int			&ClapTrap::getAttackDamage()
{
	return (_AttackDamage);
}

void		ClapTrap::setAttackDamage(int AttackDamage)
{
	_AttackDamage = AttackDamage;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapTrap)
{
	if (this != &clapTrap)
	{
		std::cout << "CLAPTRAP assignation operator called" << std::endl;
		this->_Name = clapTrap._Name;
		this->_Hitpoints = clapTrap._Hitpoints;
		this->_EnergyPoints = clapTrap._EnergyPoints;
		this->_AttackDamage = clapTrap._AttackDamage;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
	stream << "Name: " << clapTrap.getName() << \
	" Hitpoints: " << clapTrap.getHitpoints() << \
	" Energy Points: " << clapTrap.getEnergyPoints() << \
	" Attack Damage: " << clapTrap.getAttackDamage();
	return (stream);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->getName() << " has attacked " << target << ", " \
	<< "causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_EnergyPoints -= amount;
	std::cout << this->getName() << " has lost " \
	<< amount << " healthpoints.. :-(" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_EnergyPoints += amount;
	std::cout << this->getName() << " has recovered " \
	<< amount << " healthpoints. :-)" << std::endl;
}
