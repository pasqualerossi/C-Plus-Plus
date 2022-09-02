/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:09:04 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 15:04:48 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>

typename T::iterator easyfind(T& container, int needle) 
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);
	return it;
}

#endif