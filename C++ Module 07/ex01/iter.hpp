/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:55:30 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:41:51 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>

void iter(T *array, size_t size, void(*f)(T const &)) 
{
    for (size_t i = 0; i < size; i++) 
	{
        f(array[i]);
    }
}
