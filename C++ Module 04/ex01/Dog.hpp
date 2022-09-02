/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:21:25 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:08:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	private :

	Brain *brain;

	public :

	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	void makeSound() const;

	Brain *get_brain(void) const;
};
