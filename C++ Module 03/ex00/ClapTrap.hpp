/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:53:04 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 18:55:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:

		std::string	_Name;
		int			_Hitpoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	
	public:

		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap &clapTrap);
		~ClapTrap();

		std::string			&getName();
		void				setName(std::string &Name);
		int					&getHitpoints();
		void				setHitpoints(int Hitpoints);
		int					&getEnergyPoints();
		void				setEnergyPoints(int EnergyPoints);
		int					&getAttackDamage();
		void				setAttackDamage(int AttackDamage);

		ClapTrap			&operator=(ClapTrap const &clapTrap2);

		void				attack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap2);

#endif