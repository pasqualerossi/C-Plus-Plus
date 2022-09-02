/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:01:56 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:44:16 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.tpp"

template <typename T>

class Array 
{
	public:

    Array();
    Array(unsigned int size);
    Array(const Array& other);
    ~Array();
    Array& operator=(const Array& other);
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
    unsigned int size() const;
	
	private:

    T* m_array;
    unsigned int m_size;
};
