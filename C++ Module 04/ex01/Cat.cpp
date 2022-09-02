/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:54 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:07:39 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Passing through Cat default constructor" << std::endl;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Passing through Cat destructor" << std::endl;
	delete this->brain;
	return;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Passing through Cat copy constructor" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Passing through Cat operator=() overload" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain	*Cat::get_brain() const
{
	return (this->brain);
}
