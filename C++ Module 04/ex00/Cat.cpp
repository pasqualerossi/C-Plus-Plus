/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:09:11 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:05 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Passing through Cat default constructor" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Passing through Cat destructor" << std::endl;
	return;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Passing through Cat copy constructor" << std::endl;
	*this = other;
	return;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Passing through Cat operator=() overload" << std::endl;
	this->type = other.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
