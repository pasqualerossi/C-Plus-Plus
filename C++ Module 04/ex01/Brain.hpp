/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:45 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:07:25 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>

class Brain
{
	public :

	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &oterh);

	std::string	ideas[100];
};
