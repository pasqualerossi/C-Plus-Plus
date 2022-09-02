/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:13:58 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:17:16 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :

	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);

	virtual void makeSound() const;
};
