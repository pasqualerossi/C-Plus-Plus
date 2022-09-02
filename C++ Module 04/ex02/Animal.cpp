/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:06 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:14:19 by prossi           ###   ########.fr       */
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

Animal::Animal(Animal const &other)
{
	std::cout << "Passing through Animal copy constructor" << std::endl;
	*this = other;
	return;
}

Animal &Animal::operator=(Animal const &other)
{
	std::cout << "Passing through operator=() overload" << std::endl;
	this->type = other.getType();
	*(this->get_brain()) = *(other.get_brain());
	return *this;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

Brain *Animal::get_brain(void) const
{
	return (NULL);
}
