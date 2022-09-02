/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:24:48 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 11:48:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void		attack(void);
};

#endif