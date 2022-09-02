/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:21:17 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:08:08 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Passing through Dog default constructor" << std::endl;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Passing through Dog destructor" << std::endl;
	delete this->brain;
	return;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Passing through Dog copy constructor" << std::endl;
	this->brain = new Brain();
	*this = other;
	return;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Passing through Dog operator=() overload" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

Brain	*Dog::get_brain(void) const
{
	return (this->brain);
}
