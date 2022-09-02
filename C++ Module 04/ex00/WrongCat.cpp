/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:17:14 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:04:51 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Passing through WrongCat default constructor" << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Passing through WrongCat destructor" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Passing through WrongCat copy constructor" << std::endl;
	*this = other;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Passing through WrongCat operator=() overload" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
