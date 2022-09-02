/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:09:20 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public :

	Cat();
	virtual ~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);

	virtual void makeSound() const;
};
