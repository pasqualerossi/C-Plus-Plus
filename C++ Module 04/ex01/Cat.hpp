/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:21:03 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:07:54 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	private :

	Brain *brain;

	public :

	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);

	void makeSound() const;

	Brain *get_brain() const;
};
