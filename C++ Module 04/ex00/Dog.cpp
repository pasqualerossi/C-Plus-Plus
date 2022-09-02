/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:09:28 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Passing through Dog default constructor" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Passing through Dog destructor" << std::endl;
	return;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Passing through Dog copy constructor" << std::endl;
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Passing through Dog operator=() overload" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
