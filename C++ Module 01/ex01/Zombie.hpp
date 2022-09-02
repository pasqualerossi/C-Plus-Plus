/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:22:40 by prossi            #+#    #+#             */
/*   Updated: 2022/08/02 19:18:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string>

class Zombie 
{
	private:

	std::string name;

	public:

	void announce( void )
	{
		std::cout << this->name;
		std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
	};
	void setname(std::string name)
	{
		if (!name.empty())
			this->name = name;
	};
	void distroyz(void)
	{
		std::cout << "destroying : ";
		std::cout << this->name << std::endl;
	};
};

Zombie* zombieHorde( int N, std::string name );

# endif