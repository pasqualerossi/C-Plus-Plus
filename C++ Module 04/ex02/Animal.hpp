/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:28 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:14:35 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal
{
	protected :

	std::string type;

	public :

	Animal();
	virtual ~Animal(void);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);

	virtual void makeSound(void) const = 0;
	virtual Brain *get_brain(void) const;

	std::string getType(void) const;
};
