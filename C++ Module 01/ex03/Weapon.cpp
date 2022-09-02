/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:25:29 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 11:50:44 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->setType(weaponType);
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const &Weapon::getType()
{
	return (this->_type);
}

void		Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}
