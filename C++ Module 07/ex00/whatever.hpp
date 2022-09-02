/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:29:27 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:41:49 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
# define WHATEVER_HPP_

#include <iostream>

template<typename T>

void swap(T& a, T& b) 
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>

const T& max(const T& x, const T& y) 
{
	if (x > y) return x;
	return y;
}

template<typename T>

const T& min(const T& x, const T& y) 
{
	if (x < y) return x;
	return y;
}

#endif