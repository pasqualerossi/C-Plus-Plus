/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:10:20 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:52 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public :

	Dog();
	virtual ~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);

	virtual void makeSound() const;
};
