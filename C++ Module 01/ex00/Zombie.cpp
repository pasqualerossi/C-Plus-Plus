/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:19:26 by prossi            #+#    #+#             */
/*   Updated: 2022/07/22 12:25:58 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "unnamed";
}

Zombie::Zombie(std::string name)
{
    this->set_name(name);
}

Zombie::~Zombie(void)
{
    std::cout << "<" << this->_name << "> " << "Gharrrgl...\n";
}

void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ...\n";
}