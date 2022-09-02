/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:10:43 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:01:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Passing through Animal default constructor" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Passing through Animal destructor" << std::endl;
	return;
}

Animal::Animal(Animal const &other) : type(other.type)
{
	std::cout << "Passing through Animal copy constructor" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &other)
{
	std::cout << "Passing through animal operator=() overload" << std::endl;
	type = other.type;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "Some noise" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}
