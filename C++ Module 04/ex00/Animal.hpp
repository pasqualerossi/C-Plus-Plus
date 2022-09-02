/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:10:52 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:01:52 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected :

	std::string type;

	public :

	Animal();
	virtual ~Animal();
	Animal(const Animal &other);
	virtual Animal &operator=(const Animal &other);

	virtual void makeSound() const;

	std::string getType() const;
};
