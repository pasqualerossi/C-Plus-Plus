/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:37 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:07:13 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas()
{
	std::cout << "Passing through Brain constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Passing through Brain destructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Passing through Brain copy constructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (unsigned i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return *this;
}
