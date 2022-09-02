/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:29:50 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 12:03:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

using	std::string;
using	std::cout;
using	std::cin;
using	std::endl;

class Harl 
{
	public:
	Harl();
	void	complain(std::string level);

	private:
	struct _lut
	{
		string	level;
		void	(Harl::*f)(void);
	};
	struct _lut	lut[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
